#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int N, M, i, j, dp[10005], w[45], v[45], res=0;
int main() {
    cin >> N >> M;
    for (i = 1; i <= N; ++i) 
		cin >> w[i] >> v[i];
    for (i = 1; i <= N; ++i)
        for (j = M; j >= w[i]; --j) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            res = max(res, dp[j]);
        }
    cout << res;

    return 0;
}
