#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
const int oo = 1000000007;
int n, m, a[MAXN], minA;
vector<int> graph[MAXN];
bool visited[MAXN];
void dfs(int u) {
    visited[u] = true;
    minA = min(minA, a[u]);

    for(int v: graph[u])
        if (!visited[v])
            dfs(v);
}
int main() {
    cin >> n >> m;
    for(int u = 0; u < n; ++u)
        cin >> a[u];
    for(int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        graph[u].push_back(v); graph[v].push_back(u);
    }
    long long ans = 0;
    for(int u = 0; u < n; ++u) {
        if (!visited[u]) {
            visited[u] = true;
            minA = oo;
            dfs(u);
            ans += minA;
        }
    }
    cout << ans;
    return 0;
}
