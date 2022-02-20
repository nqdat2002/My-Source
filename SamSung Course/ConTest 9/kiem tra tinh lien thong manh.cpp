#include <bits/stdc++.h>
using namespace std;
int v, e;
bool chuaxet[1005];
vector<int> a[1005];
bool bfs(int u) {
    int cnt = 0;
    memset(chuaxet, true, sizeof(chuaxet));
    int x, y;
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        cnt++;
        for (int i = 0; i < a[x].size(); i++) {
            y = a[x][i];
            if (chuaxet[y]) {
                chuaxet[y] = false;
                q.push(y);
            }
        }
    }
    return (cnt == v) ? true : false;
}
int main() {
    int t, x, y, mark;
    cin >> t;
    while (t--) {
        mark = 0;
        for (int i = 0; i < 1005; i++)
            a[i].clear();
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            cin >> x >> y;
            a[x].push_back(y);
        }
        for (int u = 1; u <= v; u++) {
            if (bfs(u) == false) {
                mark = 1;
                break;
            }
        }
        cout << ((mark == 1) ? "NO" : "YES" ) << endl;
    }
    return 0;
}