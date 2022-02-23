#include <bits/stdc++.h>
int used[99999]; 
using namespace std;
int Min(int a[],int n){
	int temp=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]<temp) temp=a[i]; 
	} 
	return temp; 
} 
int Max(int a[],int n){
	int temp=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]>temp) temp=a[i]; 
	} 
	return temp; 
}
int dem(int a[],int n){
	int l=Min(a,n);
	int r=Max(a,n);
	int count=0; 
	memset(used,0,sizeof(used));
	for(int i=1;i<=n;i++){
		used[a[i]]=1; 
	} 
	for(int i=l;i<=r;i++){
		if(used[i]==0) count++; 
	} 
	return count; 
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
}
