#include <bits/stdc++.h>
using namespace std;
int dp[1005], n, Ins, Del, Cop;
int Solve(int n, int Ins, int Del, int Cop) {
    if (n == 1)
        return Ins;
    dp[1] = Ins;
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0)
            dp[i] = min(dp[i - 1] + Ins, dp[i / 2] + Cop);
        else 
            dp[i] = min(dp[i - 1] + Ins, dp[(i + 1) / 2] + Cop + Del);
    }
    return dp[n];
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> Ins >> Del >> Cop;
        cout << Solve(n, Ins, Del, Cop) << endl;
    }
    return 0;
}
