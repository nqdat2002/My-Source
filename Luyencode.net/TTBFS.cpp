#include <bits/stdc++.h>
using namespace std;
#define nmax 105
int n, m, a[nmax][nmax];
bool vis[nmax];
void BFS(int u) {
    queue<int> q;
    q.push(u);
    vis[u] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << '\n';
        for (int v = 1; v <= n; v++)
            if (a[u][v] && !vis[v]) {
                vis[v] = 1;
                q.push(v);
            }
    }
}
int main() {
    cin >> n >> m;
    memset(a, 0, sizeof a);
    for (int u, v, i = 1; i <= m; i++) {
        cin >> u >> v;
        a[u][v] = a[v][u] = 1;
    }
    memset(vis, 0, sizeof vis);
    for (int u = 1; u <= n; u++)
        if (!vis[u])
            BFS(u);
    return 0;
}