#include <bits/stdc++.h>
using namespace std;
int n,k,a[100];
int b[100];
int dem=0; 
void init(){
	b[0]=0; 
} 
bool check(){
	for(int i=2;i<=k;i++){
		if(a[b[i]]<a[b[i-1]]) return false; 
	} 
	return true; 
} 
void back_P(int i){
	for(int j=b[i-1]+1;j<=n-k+i;j++){
			b[i]=j;
			if(i==k){
				 if(check()==true) dem++; 
			}
			else back_P(i+1);
	} 
} 
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	} 
	init();
	back_P(1);
	cout<<dem<<endl; 
} 
