#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector< bool > h(n, true), c(m, true);
    for(int i = 0; i < k; ++i) {
        int x, y;
        cin >> x >> y;
        h[x-1] = false;
        c[y-1] = false;
    }
    int h1 = 0, c1 = 0;
    for(int i = 0; i < n; ++i)
        if (!h[i])
            ++h1;
    for(int i = 0; i < m; ++i)
        if (!c[i])
            ++c1;
    long long res = 1LL * h1 * c1;
    cout << res;
    return 0;
}
