#include <bits/stdc++.h>
using namespace std;
int n,k,a[101],L[101][25001]; 
int klbo(){
	memset(L,0,sizeof(L)); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=k;j++){
			if(j>=a[i]&& L[i-1][j-a[i]]+a[i]>L[i-1][j]) L[i][j]=L[i-1][j-a[i]]+a[i];
			else L[i][j]=L[i-1][j]; 
		} 
	} 
	return L[n][k]; 
} 
int main(){
	cin>>k>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	cout<<klbo()<<endl; 
}
