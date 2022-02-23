#include <bits/stdc++.h>
using namespace std;
string c="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n,k,a[100];
void init(){
	cin>>n>>k; 
	a[0]=0; 
} 
void xuat(){
	for(int i=1;i<=k;i++){
		cout<<c[a[i]-1]; 
	} 
	cout<<endl; 
} 
void back_P(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
			a[i]=j;
			if(i==k) xuat();
			else back_P(i+1);
	} 
}
int main(){
	int t;cin>>t;
	while(t--){
		init();
		back_P(1); 
	} 
} 
