#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int MAXN = 4005;
const int MAXM = 400005;

struct Edge {
    int u, v, w;

    bool inline operator < (const Edge &rhs) const {
        return w < rhs.w;
    }
};

class DSU {
private:
    vector<int> pset;

public:
    DSU(int n) {
        pset.resize(n);
        for(int i = 0; i < n; ++i)
            pset[i] = i;
    }

    int findSet(int i) {
        return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
    }

    bool unionSet(int i, int j) {
        int p = findSet(i), q = findSet(j);
        if (p == q)
            return false;

        pset[p] = q;
        return true;
    }
};

int n, m, q, maxW[MAXN][MAXN], root;
Edge e[MAXM];
vector<int> g[MAXN];

void DFS(int u, int par) {
    for(int i: g[u]) {
        int v = e[i].u + e[i].v - u;
        if (v == par)
            continue;

        maxW[root][v] = max(maxW[root][u], e[i].w);
        DFS(v, u);
    }
}

int main () {
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; ++i) {
        scanf("%d%d%d", &e[i].u, &e[i].v, &e[i].w);
        --e[i].u;
        --e[i].v;
    }

    sort(e, e+m);
    DSU s(n);

    ll mstWeight = 0;
    for(int i = 0; i < m; ++i) {
        int u = e[i].u, v = e[i].v;
        if (s.unionSet(u, v)) {
            g[u].push_back(i);
            g[v].push_back(i);
            mstWeight += e[i].w;
        }
    }

    for(int u = 0; u < n; ++u) {
        root = u;
        DFS(u, -1);
    }

    scanf("%d", &q);
    for(int i = 0; i < q; ++i) {
        int u, v;
        scanf("%d%d", &u, &v);
        --u; --v;

        ll ans = mstWeight - maxW[u][v];
        printf("%lld\n", ans);
    }

    return 0;
}
