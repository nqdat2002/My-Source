#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005], c[1005], f[1005][1005]; 
int dp(){
	memset(f, 0, sizeof(f)); 
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= k; j ++){
			if(j >= a[i] && f[i - 1][j - a[i]] + c[i] > f[i - 1][j]) 
				f[i][j] = f[i - 1][j - a[i]] + c[i];
			else 
				f[i][j] = f[i - 1][j]; 
		} 
	} 
	return f[n][k]; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i ++) cin >> a[i]; 
		for(int i = 1; i <= n; i ++) cin >> c[i]; 
		cout << dp() << endl; 
	} 
	return 0;
}