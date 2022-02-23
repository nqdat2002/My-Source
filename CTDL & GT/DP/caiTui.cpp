#include <bits/stdc++.h>
using namespace std;
int n,k,a[1001],c[1001],L[1001][1001]; 
int tui(){
	memset(L,0,sizeof(L)); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(j>=a[i]&&L[i-1][j-a[i]]+c[i]>L[i-1][j]) L[i][j]=L[i-1][j-a[i]]+c[i];
			else L[i][j]=L[i-1][j]; 
		} 
	} 
	return L[n][k]; 
} 
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>a[i]; 
		} 
		for(int i=1;i<=n;i++){
			cin>>c[i]; 
		}
		cout<<tui()<<endl; 
	} 
}
