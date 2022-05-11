#include <bits/stdc++.h>
using namespace std;
bool check[1005];
vector<int> edge[1005];
int ok, n, m;

void dfs(int u, int cnt){
    if(cnt == n){
        ok = 1;
        return;
    }
    check[u] = true;
    for(auto v: edge[u]){
        if(!check[v])
            dfs(v, cnt + 1);
    }
    check[u] = false;
}

int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 0; i <= 1005; i ++) edge[i].clear();
        cin >> n >> m;
        for(int i = 1; i <= m; i ++){
            int x, y; cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        memset(check, false, sizeof(check));
        ok = 0;
        for(int i = 1; i <= n; ++i) dfs(i, 1);
        cout << ok << endl;
    }
    return 0;
}