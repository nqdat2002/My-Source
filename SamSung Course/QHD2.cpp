#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
// to hop
const ll mod = 1e9 + 7;
ll dp[1001][1001];
int main(){
	for(int i = 1; i <= 1000; i ++){
		for(int j = 0 ; j <= i; j ++){
			if(j == 0 || j == i) 
				dp[i][j] = 1; 
			else 
				dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % mod; 
		} 
	} 
	int t; cin >> t;
	while(t--) {
		int n, k; cin >> n >> k;
		cout << dp[n][k] << endl;
	}
	return 0;
}
*/
/*
// day con tang dai nhat
ll f[100005];
ll dp(int a[], int n){
	ll res = 0;
	for(int i = 0; i < n; i ++){
		f[i] = 1;
		for(int j = 0; j < i; j ++){
			if(a[i] > a[j])
				f[i] = max(f[i], f[j] + 1);
		}
		res = max(f[i], res);
	}
	return res;
}
int main(){
	int n; cin >> n;
	int a[1005];
	for(int i = 0; i < n; i ++) cin >> a[i];
	cout << dp(a, n) << endl;
	return 0;
}



*/
ll f[100005];
ll dp(int a[], int n){
	ll res = 0;
	for(int i = 0; i < n; i ++){
		f[i] = a[i];
		for(int j = 0; j < i; j ++){
			if(a[i] > a[j])
				f[i] = max(f[i], f[j] + a[i]);
		}
		res = max(f[i], res);
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[1005];
		for(int i = 0; i < n; i ++) cin >> a[i];
		cout << dp(a, n) << endl;
	}
	return 0;
}