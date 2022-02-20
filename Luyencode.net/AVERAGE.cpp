#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
const int maxN = 505*10;
const int maxS = maxN*maxN;
int nTest, n, a, x[10*maxN], dp[2][10*maxS];
int add(int &a, int b) {
    a += b;
    if (a >= MOD) a -= MOD;
}
int main() {
    cin>>nTest;
    while (nTest--) {
        cin >> n >> a;
        for(int i = 0; i < n; ++i) {
            cin>>x[i];
            x[i] -= a;
        }
        memset(dp, 0, sizeof dp);
        dp[0][maxS] = 1;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < 2*maxS; ++j) {
                if (dp[0][j] > 0) {
                    add(dp[1][j], dp[0][j])%MOD;
                    add(dp[1][j+x[i]], dp[0][j])%MOD;
                }
            }
            for(int j = 0; j < 2*maxS; ++j) {
                dp[0][j] = dp[1][j];
                dp[1][j] = 0;
            }
        }
        cout << (dp[0][maxS]-1+MOD)%MOD << '\n';
    }
    return 0;
}
