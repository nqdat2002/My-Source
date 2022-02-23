#include <bits/stdc++.h>
using namespace std;
int mat[1001][1001];
int dem(string s1, string s2){
	int n=s1.length();
	int m=s2.length();
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(s1[i-1]==s2[j-1]) mat[i][j]=mat[i-1][j-1]+1;
			else mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
		}
	}
	return mat[n][m];
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<dem(s1,s2)<<endl;
	}
}
