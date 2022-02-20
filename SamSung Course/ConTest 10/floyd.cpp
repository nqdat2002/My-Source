#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 7;
int d[1000][1000], a[1000][1000];
int n, m, k;
void floyd() {
    for (int k = 1; k <= n; k++) {
        for (int u = 1; u <= n; u++) {
            for (int v = 1; v <= n; v++) {
                if (d[u][v] > d[u][k] + d[k][v]) {
                    d[u][v] = d[u][k] + d[k][v];
                    a[u][v] = a[k][v];
                }
            }
        }
    }
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j)
                d[i][j] = 0;
            else d[i][j] = mx;
            a[i][j] = i;
        }
    }
    for (int i = 1; i <= m; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        d[u][v] = c;
        d[v][u] = c;
    }
    floyd();
    cin >> k;
    while (k--) {
        int u, v;
        cin >> u >> v;
        vector <int> res;
        int x = v;
        res.push_back(x);
        while (x != u) {
            x = a[u][x];
            res.push_back(x);
        }
        cout << d[u][v] << endl;
    }
    return 0;
}