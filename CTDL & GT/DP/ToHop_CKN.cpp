#include <bits/stdc++.h>
using namespace std;
#define R 1000000007
int c[1001][1001];
void tao(){
	for(int i=1;i<=1000;i++){
		for(int j=0;j<=i;j++){
			if(j==0||j==i) c[i][j]=1; 
			else c[i][j]=(c[i-1][j]+c[i-1][j-1])%R; 
		} 
	} 
} 
int main(){
	int t;cin>>t;
	tao(); 
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<c[n][k]<<endl;
	}
}
