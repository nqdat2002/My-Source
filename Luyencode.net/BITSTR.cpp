#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const ll base = 1000007;
int n, k;
ll dp[100006][106];
bool avail[100006][106];

ll get_res(int cnt, int x) {
    if (cnt == 0)
        return x == k;
    if (avail[cnt][x])
        return dp[cnt][x];
    avail[cnt][x] = true;
    return dp[cnt][x] = (get_res(cnt - 1, 0) + get_res(cnt - 1, x + 1)) % base;
}

int main() {
    cin >> n >> k;
    if (k > n) {
        cout << 0;
        return 0;
    }
    ll tmp = 2;
    for (int i = 1; i <= n; ++i) {
        avail[i][k] = true;
        dp[i][k] = tmp;
        tmp = tmp * 2 % base;
    }
    cout << get_res(n, 0);
    return 0;
}
