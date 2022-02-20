#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> p;
int n, m, start;
int res[1005], parent[1005];
vector<p> List[1005];
priority_queue<p, vector<p>, greater<p> > q;
void Dijkstra(int st) {
    int i, u, v;
    for (i = 1; i <= n; i++) {
        res[i] = 1e9 + 7;
        parent[i] = -1;
    }
    res[st] = 0;
    while (!q.empty())
        q.pop();
    q.push({0, st});
    while (!q.empty()) {
        u = q.top().second;
        q.pop();
        for (i = 0; i < List[u].size(); i++) {
            v = List[u][i].second;
            int t = List[u][i].first;
            if (res[u] + t < res[v]) {
                res[v] = res[u] + t;
                parent[v] = u;
                q.push({res[v], v});
            }
        }
    }
    for (i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
}

int main() {
    int t, i, u, v, k;
    cin >> t;
    while (t--) {
        cin >> n >> m >> start;
        for (i = 0; i <= n; i++)
            List[i].clear();
        for (i = 1; i <= m; i++) {
            cin >> u >> v >> k;
            List[u].push_back({k, v});
            List[v].push_back({k, u});
        }
        Dijkstra(start);
    }
    return 0;
}