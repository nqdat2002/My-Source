#include <bits/stdc++.h> 
using namespace std;
int n,k,a[100],b[100];
int dem=0; 
void xuat(){
	for(int i=1;i<=n;i++){
		if(b[i]!=0) cout<<a[i]<<" "; 
	} 
	cout<<endl; 
} 
void Try(int i){
	for(int j=0;j<=1;j++){
		b[i]=j;
		if(i==n){
			int sum=0;
			for(int l=1;l<=n;l++){
				sum+=a[l]*b[l]; 
			} 
			if(sum==k) {
				dem++;
				xuat(); 
			} 
		} 
		else Try(i+1); 
	} 
} 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	memset(b,0,sizeof(b)); 
	Try(1);
	cout<<dem<<endl; 
} 
