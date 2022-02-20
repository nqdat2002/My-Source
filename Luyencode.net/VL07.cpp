#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int pas(int k,int n){
	if(k==0||k==n) 
        return 1;
	else
        return pas(k-1,n-1)+pas(k,n-1);
}
int comb(int n,int k){
	int C[n+1][n+1],i,j;
	C[0][0]=1;
	for(i=1;i<=n;i++){
		C[i][0]=1;
		C[i][i]=1;
		for(j=1;j<i;j++){
			C[i][j] = C[i-1][j-1] + C[i-1][j];
		}
	}
	return C[n][k];
}
int main(){
	int n,k;
	cin >> n >> k;
	cout << comb(n,k);
    return 0;	
}