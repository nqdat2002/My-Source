#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> edge[1005];
bool vs[1005];
void dfs(int u, int v, int cnt){
    if(u == v){
        cout << cnt << endl;
        return;
    }
    vs[u] = true;
    for(auto x: edge[u]){
        if(!vs[x]){
            dfs(x, v, cnt + 1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 0; i < 1005; ++i) edge[i].clear();
        cin >> n;
        for(int i = 1; i < n; ++i){
            int u, v; cin >> u >> v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        int q; cin >> q;
        while(q--){
            int u, v; cin >> u >> v;
            memset(vs, false, sizeof(vs));
            dfs(u, v, 0);
        }
    }
    return 0;
} 
