#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int v, e;
bool chuaxet[MAX];
vector<int> arr[MAX];

bool bfs(int u) {
    vector<int> parent (v, -1);
    int i, x, y;
    memset(chuaxet, true, sizeof(chuaxet));

    queue<int> q;
    q.push(u);
    chuaxet[u] = false;

    while (!q.empty()) {
        x = q.front(); q.pop();
        for (i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
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

bool result() {
    memset(chuaxet, true, sizeof (chuaxet));
    for (int i = 1; i <= v; i++)
        if (chuaxet[i] && bfs(i))
            return true;

    return false;
}

int main() {
    int t, tmp1, tmp2;
    cin >> t;
    while (t--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        
        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            arr[tmp2].push_back(tmp1);
        }

        if (result())
            cout << "YES";
        
        else cout << "NO";

        cout << '\n';
    }
    return 0;
}