#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) a* b / __gcd(a, b)
#define I first
#define II second
const int INF = 2 * 1e9;
const int N = 5000 + 1;
const int MOD = 1e9 + 7;
int d[N], n, m;
ll s[N];
vector<pair<int, int> > g[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    while (m--) {
        int k, u, v, l;
        cin >> k >> u >> v >> l;
        g[u].push_back({v, l});
        if (k == 2)
            g[v].push_back({u, l});
    }
    memset(d, 0x3f, sizeof(d));
    s[1] = 1;
    set<pair<int, int> > q;
    q.insert({ 0, 1 });
    d[1] = 0;
    while (!q.empty()) {
        auto t = *q.begin();
        int u = t.II, dmin = t.I;
        q.erase(q.begin());
        if (dmin > d[u]) continue;
        for (auto v : g[u])
            if (d[v.I] > d[u] + v.II) {
                d[v.I] = d[u] + v.II;
                s[v.I] = s[u];
                q.insert({d[v.I], v.I});
            } else if (d[v.I] == d[u] + v.II)
                s[v.I] += s[u];
    }
    cout << d[n] << ' ' << s[n];
    return 0;
}
