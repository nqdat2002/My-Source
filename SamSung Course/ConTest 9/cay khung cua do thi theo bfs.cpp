#include <bits/stdc++.h>
using namespace std;
vector<int> a[1001];
bool check[1001];
vector<pair<int, int>> X;
void reset() {
    for (int i = 0; i < 1001; i++) a[i].clear();
    memset(check, false, sizeof(check));
    X.clear();
}
void BFS(int u) {
    check[u] = true;
    queue<int> B;
    B.push(u);
    while (B.size()) {
        int p = B.front();
        B.pop();
        for (int x : a[p]) {
            if (!check[x]) {
                X.push_back({ p, x });
                B.push(x);
                check[x] = true;
            }
        }
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        reset();
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        BFS(k);
        if (X.size() == n - 1) {
            for (int i = 0; i < X.size(); i++) {
                cout << X[i].first << " " << X[i].second << endl;
            }

        }
        else cout << -1 << endl;
    }
    return 0;
}