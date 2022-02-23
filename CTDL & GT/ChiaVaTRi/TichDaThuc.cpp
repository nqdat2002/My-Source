#include <bits/stdc++.h>
using namespace std;
int tich[201]; 
void nhan(int a[],int b[],int n,int m){
	int i=0,j=0;
	memset(tich,0,sizeof(tich));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			tich[i+j]+=a[i]*b[j]; 
		} 
	} 
} 
int main(){
	int t;cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n],b[m];
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		for(int i=0;i<m;i++){
			cin>>b[i]; 
		}
		nhan(a,b,n,m); 
		for(int i=0;i<m+n-1;i++){
			cout<<tich[i]<<" "; 
		} 
		cout<<endl; 
	} 
}
