#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long a[100005], Dp[100005] = {0};
		for(int i = 1 ; i <= n ; i ++)
			cin >> a[i];
		Dp[1] = a[1];
		Dp[2] = max(a[1], a[2]);
		for(int i = 3; i <= n ; i ++)
			Dp[i] = max(Dp[i - 2] + a[i], Dp[i - 1]);
		cout << Dp[n] << endl;
	}
	return 0;
}