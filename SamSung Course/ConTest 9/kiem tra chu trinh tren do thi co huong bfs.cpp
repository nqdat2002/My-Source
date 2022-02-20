#include <bits/stdc++.h>
using namespace std;
int v, e;
bool chuaxet[1005];
vector<int> a[1005];
bool bfs(int u) {
    vector<int> parent (v, -1);
    int x, y;
    memset(chuaxet, true, sizeof(chuaxet));
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;
    while (!q.empty()) {
        x = q.front(); q.pop();
        for (i = 0; i < a[x].size(); i++) {
            y = a[x][i];
            if (chuaxet[y]) {
                chuaxet[y] = false;
                q.push(y);
                parent[y] = x;
            }
            else if (parent[x] != y)
                return true;
        }
    }
    return false;
}

bool Solve() {
    memset(chuaxet, true, sizeof (chuaxet));
    for (int i = 1; i <= v; i++)
        if (chuaxet[i] && bfs(i))
            return true;
    return false;
}

int main() {
    int t, x, y;
    cin >> t;
    while (t--) {
        for (int i = 0; i < 1005; i++)
            a[i].clear();
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        cout << ((Solve() == true) ? "YES" : "NO");
    }
    return 0;
}