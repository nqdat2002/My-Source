#include <bits/stdc++.h>
using namespace std;
vector<int> A[1001];
bool check[1001];
typedef pair<int, int> p;
void reset() {
    for (int i = 0; i < 1001; i++)A[i].clear();
    memset(check, false, sizeof(check));
}
int BFS(int u,int v) {
    check[u] = true;
    queue<p> X;
    X.push({ u, 0 });
    while (X.size()) {
        p x = X.front();
        X.pop();
        if (x.first == v)return x.second;
        for (int z : A[x.first]) {
            if (! check[z]) {
                X.push({ z,x.second + 1 });
                check[z] = true;
            }
        }
    }
    return -1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        reset();
        int n, m; cin >> n >> m;
        for (int i = 0; i < m; i++) {
            int a, b; cin >> a >> b;
            A[a].push_back(b);
        }
        int res = 0, count = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i != j) {
                    memset(check, false, sizeof(check));
                    int f = BFS(i, j);
                    if (f != -1) {
                        res += f;
                        count++;
                    }
                }
            }
        }
        cout << fixed << setprecision(2) << res * 1.0 / count << endl;
    }
}