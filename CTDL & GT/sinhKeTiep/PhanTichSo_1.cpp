#include <bits/stdc++.h>
using namespace std;
int n, a[11];
bool dung=false;
int k;
void xuat(){
	cout<<"(";
	for(int i=1;i<=k;i++){
		if(i<k) cout<<a[i]<<" ";
		else cout<<a[i]; 
	} 
	cout<<")"<<" "; 
} 
int phan_tich(){
	int i=k;
	int d,r,s; 
	while(i>0&&a[i]==1){
		i--;
	} 
	if(i>0){
		a[i]--;
		d=k-i+1;
		r=d/a[i];
		s=d%a[i];
		k=i;
		if(r>0){
			for(int j=i+1;j<=i+r;j++){
				a[j]=a[i]; 
			} 
			k+=r; 
		} 
		if(s>0){
			k++;
			a[k]=s;
		} 
	}
	else dung=true; 
} 
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n; 
		k=1;
		a[k]=n ;
		dung=false; 
		while(dung!=true){
			xuat();
			phan_tich(); 
		}
		cout<<endl; 
	} 
} 
