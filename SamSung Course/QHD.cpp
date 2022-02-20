#include <bits/stdc++.h>
using namespace std;
int n, k, a[1005], c[1005], f[1005][1005]; 
// con ech
/*
long long dp[100];
int main(){
	dp[1] = 1; dp[2] = 1; dp[3] = 4;
	for(int i = 4; i <= 50; i ++){
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
	}
	int t; cin >> t;
	while(t--){
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
*/
// bac thang
typedef long long ll;
const long long mod = 1e9 + 7;
ll dp(int n, int k){
	ll r[100005] = {0};
	r[0] = r[1] = 1;
	for(int i = 2; i <= n; i ++){
		for(int j = 1; j <= min(i, k); j ++)
			r[i] = (r[i] + r[i - j]) % mod;
	}
	return r[n];
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		cout << dp(n, k) << endl;
	}
	return 0;
}