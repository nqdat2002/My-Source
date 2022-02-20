#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
bool chuaxet[MAX];
int truoc[MAX];
vector<int> arr[MAX];
void dfs(int u) {
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
}
vector<int> duongDi(int s, int t) {
    stack <int> st;
    vector<int> res;
    st.push(t);
    int k = t;
    while (truoc[k] != s) {
        st.push(truoc[k]);
        k = truoc[k];
    }
    st.push(s);
    while (!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    return res;
}

int main() {
    int test, v, e, s, t, tmp1, tmp2;
    cin >> test;
    while (test--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        cin >> v >> e;
        s = 1; t = 2;
        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            // arr[tmp2].push_back(tmp1);
        }
        dfs(s);
        vector<int> v1 = duongDi(s, t);
        dfs(t);
        vector<int> v2 = duongDi(t, s);
        set<int> ans;
        for(auto z : v1) ans.insert(z);
        for(auto z : v2) ans.insert(z);
        v1.clear();
        v2.clear();
        cout << ans.size() << endl;
    }
    return 0;
}