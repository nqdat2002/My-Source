#include <bits/stdc++.h>
#define R 1000000007 
using namespace std;
int c[100001];
int dem(int n,int k){
	c[0]=1;
	for(int i=1;i<=n;i++){
		c[i]=0;
		for(int j=i-1;j>=0&&j>=i-k;j--){
			 c[i]+=c[j];
			 c[i]=c[i]%R; 
		} 
	} 
	return c[n]; 
} 
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		 cout<<dem(n,k)<<endl; 
	} 
}
