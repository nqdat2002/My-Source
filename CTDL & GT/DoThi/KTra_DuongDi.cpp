#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

bool chuaxet[MAX];
int truoc[MAX];
vector<int> arr[MAX];

void dfs(int u, int t) {
    memset(chuaxet, true, sizeof(chuaxet));
    memset(truoc, 0, sizeof(truoc));

    int i, x, y;
    stack<int> st;
    st.push(u);
    chuaxet[u] = false;

    while (!st.empty()) {
        x = st.top(); st.pop();
        for (i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                chuaxet[y] = false;
                truoc[y] = x;
                st.push(x);
                st.push(y);
                break;
            }
        }
    }

    if (truoc[t] == 0)
        cout << "NO";
    
    else 
        cout << "YES";

    cout << '\n';
}

int main() {
    int t, t2, n, m, tmp1, tmp2;
    cin >> t;
    while (t--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        
        cin >> n >> m;

        for (int i = 0; i < m; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            arr[tmp2].push_back(tmp1);
        }

        cin >> t2;
        while (t2--) {
            cin >> tmp1 >> tmp2;
            dfs(tmp1, tmp2);
        }
    }
    return 0;
}