#include <bits/stdc++.h>
using namespace std;
int c[40001];
int dem(int a[],int n,int k){
	memset(c,0,sizeof(c));
	int i,j;
	c[0]=1;
	for(i=1;i<=n;i++){
		for(j=k;j>=a[i];j--){
			if(c[j]==0&&c[j-a[i]]==1) c[j]=1;
		}
	}
	return c[k];
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(dem(a,n,k)==1) cout<<"YES"<<endl;	
		else cout<<"NO"<<endl;
	}
}
