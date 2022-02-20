#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long mod = 1e9 + 7;
ll n, k, f[100005];
ll res() {
    f[0] = 1;
    for (int i = 1; i <= n; i++) {
        f[i] = 0;
        for (int j = 1; j <= k; j++) {
            if (j <= i) {
                f[i] = (f[i] + f[i - j]) % mod;
            }
        }
    }
    return f[n];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << res() << endl;
    }
    return 0;
}
