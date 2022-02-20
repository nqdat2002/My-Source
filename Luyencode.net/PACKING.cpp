#include <bits/stdc++.h>
using namespace std;
int n, v, x, i, j, dp[100005];
int main() {
    cin >> n >> v;
    for (i = 1; i <= n; ++i) {
        cin >> x;
        for (j = v; j >= x; --j) 
			dp[j] = max(dp[j], dp[j - x] + x);
    }
    cout << dp[v];

    return 0;
}
