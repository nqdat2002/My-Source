#include <bits/stdc++.h>
using namespace std;

int n, a[105];
int f[105], g[105];
int result() {
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (a[j] < a[i] && f[j] + a[i] > f[i])
                f[i] = f[j] + a[i];
        }
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            if (a[i] > a[j] && g[j] + a[i] > g[i])
                g[i] = g[j] + a[i];
        }
    }

    int res = INT_MIN;
    for (int i = 1; i <= n; i++)
        res = max(res, f[i] + g[i] - a[i]);
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            f[i] = a[i];
            g[i] = a[i];
        }
        cout << result() << endl;
    }
    return 0;
}
