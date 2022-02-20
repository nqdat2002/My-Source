#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

const int MAXK = 15;
const int MAXN = 10000;
const int MAXM = 20000;
const int oo = 1000000007;

struct Edge {
    int u, v, w;
};

int n, m, k, c[MAXK], d[MAXK][MAXN], cyc[1<<MAXK], dp[1<<MAXK];
Edge e[MAXM];
vector<int> g[MAXN];

void dijkstra(int s, int d[]) {
    for(int u = 0; u < n; ++u)
        d[u] = oo;
    d[s] = 0;

    priority_queue<pii, vector<pii>, greater<pii> > pq;
    pq.push({d[s], s});

    vector<bool> avail(n, true);

    while (!pq.empty()) {
        int u = pq.top().second; pq.pop();
        if (!avail[u]) continue;

        avail[u] = false;
        for(int i: g[u]) {
            int v = e[i].u + e[i].v - u, w = e[i].w;
            if (avail[v] && d[v] > d[u] + w) {
                d[v] = d[u] + w;
                pq.push({d[v], v});
            }
        }
    }
}

void getCyc() {
    for(int mask = 0; mask < 1<<k; ++mask)
        cyc[mask] = oo;

    for(int first = 0; first < k; ++first) {
        vector<vector<int> > dp(1<<k, vector<int>(k, oo));
        dp[1<<first][first] = 0;

        for(int mask = 0; mask < 1<<k; ++mask) {
            for(int i = 0; i < k; ++i) {
                if (dp[mask][i] == oo) continue;
                for(int j = 0; j < k; ++j) {
                    if (mask&(1<<j)) continue;
                    dp[mask|(1<<j)][j] = min(dp[mask|(1<<j)][j], dp[mask][i] + d[i][e[c[j]].u]);
                }
            }
        }

        for(int mask = 0; mask < 1<<k; ++mask)
            for(int i = 0; i < k; ++i)
                cyc[mask] = min(cyc[mask], dp[mask][i] + d[i][e[c[first]].u]);
    }
}

int solve() {
    for(int mask = 0; mask < 1<<k; ++mask) {
        dp[mask] = cyc[mask];
        for(int sub = mask; sub > 0; sub = (sub-1) & mask)
            dp[mask] = min(dp[mask], cyc[sub] + dp[mask^sub]);
    }
    return dp[(1<<k)-1];
}

int main () {
    freopen("SEQOP.INP", "r", stdin);
    freopen("SEQOP.OUT", "w", stdout);

    scanf("%d%d%d", &n, &m, &k);
    for(int i = 0; i < k; ++i) {
        scanf("%d", &c[i]);
        --c[i];
    }
    for(int i = 0; i < m; ++i) {
        scanf("%d%d%d", &e[i].u, &e[i].v, &e[i].w);
        --e[i].u; --e[i].v;
        g[e[i].u].push_back(i);
    }

    for(int i = 0; i < k; ++i)
        dijkstra(e[c[i]].v, d[i]);

    getCyc();

    int ans = solve();
    if (ans == oo)
        ans = -1;
    printf("%d", ans);

    return 0;
}
