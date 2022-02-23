#include <bits/stdc++.h>
using namespace std;
int c[1001]; 
int dem(int a[],int n){
	int t=1; 
	c[1]=1; 
	for(int i=2;i<=n;i++){
		c[i]=1;
		for(int j=1;j<i;j++){
			if(a[i]>=a[j]&&c[i]<c[j]+1) c[i]=c[j]+1; 
		} 
		t=max(t,c[i]); 
	} 
	return n-t; 
} 
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for(int i=1;i<=n;i++){
			cin>>a[i]; 
		} 
		cout<<dem(a,n)<<endl; 
	} 
	return 0; 
}
