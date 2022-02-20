#include <bits/stdc++.h>
#define pii pair<int, int>
#define MAX 100005
#define INF (long long)(1e10)
using namespace std;
int res, q, k;
long long f[95];
long long result(int n) {
    memset(f, 0, sizeof f);
    f[0] = 1;
    for (int j = 0; j < n; j++) {
        if (j + 2 <= n)
            f[j + 2] = f[j + 2] + f[j];
        if (j + 1 <= n)
            f[j + 1] = f[j + 1] + f[j];
    }
    return f[n];
}
int main() {

    cin >> q;
    for (int i = 1; i <= q; i++) {
        cin >> k;
        cout << result(k) << endl;
    }

    return 0;
}
