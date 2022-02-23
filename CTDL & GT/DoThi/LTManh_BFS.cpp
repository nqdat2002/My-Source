#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int v, e;
bool chuaxet[MAX];
vector<int> arr[MAX];

bool bfs(int u) {
    int count = 0;
    memset(chuaxet, true, sizeof(chuaxet));

    int i, x, y;
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;

    while (!q.empty()) {
        int x = q.front(); q.pop();
        count++;
        for (int i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                chuaxet[y] = false;
                q.push(y);
            }
        }
    }

    if (count == v)
        return true;
    
    else 
        return false;
}

int main() {
    int t, tmp1, tmp2, flag;
    cin >> t;
    while (t--) {
        flag = 0;
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        
        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            // arr[tmp2].push_back(tmp1);
        }

        for (int u = 1; u <= v; u++) {
            if (bfs(u) == false) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "NO";
        
        else 
            cout << "YES";

        cout << '\n';
    }
    return 0;
}