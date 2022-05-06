#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n + 1];
		for(int i = 1; i <= n; i ++) cin >> a[i];
		int res = 1;
		int dp[1005];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i ++){
			for(int j = 1; j <= i; j ++){
				if(a[i] >= a[j])
					dp[i] = max(dp[i], dp[j]);
			}
			dp[i]++;
			res = max(res, dp[i]);
		}
		cout << n - res << endl;
	}
	return 0;
}