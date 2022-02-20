#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int v, e;
bool chuaxet[MAX];
vector<int> arr[MAX];
vector<int> res;
void dfs(int u) {
    memset(chuaxet, true, sizeof(chuaxet));
    int i, x, y;
    stack<int> st;

    if (u == 1) {
        st.push(2);
        chuaxet[2] = false;
    }

    else {
        st.push(1);
        chuaxet[1] = false;
    }

    chuaxet[u] = false;
    
    int count = 0;

    count++;

    while (!st.empty()) {
        x = st.top(); st.pop();
        for (i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                count++;
                chuaxet[y] = false;
                st.push(x);
                st.push(y);
                break;
            }
        }
    }
    
    if (count < (v - 1))
        res.push_back(u);
}

int main() {
    int t, tmp1, tmp2, flag;
    cin >> t;
    while (t--) {
        res.clear();
        flag = 0;
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        
        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            arr[tmp2].push_back(tmp1);
        }

        for (int u = 1; u <= v; u++) {
            dfs(u);
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for(auto x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}