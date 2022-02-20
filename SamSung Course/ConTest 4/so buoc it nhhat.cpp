#include <bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int dp[1005];
int main(){
	run1
	while(t--){
		int n; cin >> n;
		int a[n + 2];
		int res = 0;
		for(int i = 1; i <= n; i ++) cin >> a[i];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i ++){
			dp[i] = 1;
			for(int j = 1; j < i; j ++){
				if(a[i] >= a[j]) 
					dp[i] = max(dp[i], dp[j] + 1);
			}
			res = max(res, dp[i]);
		}
		cout << n - res << endl;
	}
	return 0;
}

