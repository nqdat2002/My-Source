#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

bool chuaxet[MAX];
vector<int> arr[MAX];

void dfs(int u) {
    memset(chuaxet, true, sizeof(chuaxet));

    int i, x, y;
    stack<int> st;
    st.push(u);
    cout << u << " ";
    chuaxet[u] = false;

    while (!st.empty()) {
        x = st.top(); st.pop();
        for (i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                cout << y << " ";
                chuaxet[y] = false;
                st.push(x);
                st.push(y);
                break;
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

        dfs(u);
    }
    return 0;
}