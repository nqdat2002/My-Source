#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

bool chuaxet[MAX];
vector<int> arr[MAX];

void bfs(int u) {
    memset(chuaxet, true, sizeof(chuaxet));

    int i, x, y;
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;

    while (!q.empty()) {
        int x = q.front(); q.pop();
        cout << x << " ";
        for (int i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                chuaxet[y] = false;
                q.push(y);
            }
        }
    }

    cout << '\n';
}

int main() {
    int t, v, e, u, tmp1, tmp2;
    cin >> t;
    while (t--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        
        cin >> v >> e >> u;

        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            arr[tmp2].push_back(tmp1);
        }

        bfs(u);
    }
    return 0;
}