#include <bits/stdc++.h>
const int mod = 1000000007;
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    bool mark[n] = { false };
    int res[n+1] = {1,1};
    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;
        mark[a] = true;
    }
    for (int i = 2; i <= n; i++) {
        if (!mark[i-1])
            res[i] = (res[i] + res[i-1]) % mod;
        if (!mark[i - 2])
           res[i] = (res[i] + res[i-2]) % mod;
    }
    cout << res[n];
    return 0;
}
