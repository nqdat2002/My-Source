#include "bits/stdc++.h"
#define FOR(x, l, r) for (int x = l; x <= r; ++x)
using namespace std;
const int N = 10000 + 10;
const int K = 30000 + 10;
int n;
int p[N], k[N];
int f[K];
vector<int> endAt[K];

int main() {
    ios::sync_with_stdio(0);
    cin >> n;
    int limit = 0;
    FOR(i, 0, n - 1) {
        cin >> p[i] >> k[i];
        endAt[k[i]].push_back(i);
        limit = max(limit, k[i]);
    }
    f[0] = 0;
    FOR(t, 1, limit) {
        f[t] = f[t - 1];
        for (int i : endAt[t]) {
            f[t] = max(f[t], f[p[i]] + (k[i] - p[i]));
        }
    }
    cout << f[limit];
    return 0;
}
