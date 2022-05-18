#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t, n;
ll a[50002];
ll b[50002];
ll res;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i = 1; i <= n; ++i) cin >> a[i], b[i] = b[i - 1] + a[i];
        int q = 0, p = 1;
        res = 0;
        while (q != n + 1) {
            q = max_element(a + p, a + n + 1) - a;
            res += a[q] * (q - p) - b[q - 1] + b[p - 1];
            p = q + 1;
            q = q + 1;
        }
        cout << res << endl;
    }
    return 0;
}
