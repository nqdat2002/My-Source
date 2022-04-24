#include <bits/stdc++.h>
using namespace std;
int n, m, k;
vector<int> edge[1005], a;
bool check[1005];
map<int, int> mp;
void dfs(int u){
    check[u] = true;
    for(auto v: edge[u]){
        if(!check[v]){
            mp[v]++;
            dfs(v);
        }
    }
}
int main(){
    cin >> k >> n >> m;
    a.resize(k);
    mp.clear();
    for(int i = 0; i < 1005; i ++) edge[i].clear();
    for(auto &x: a) cin >> x;
    for(int i = 1; i <= m; i ++){
        int u, v; cin >> u >> v;
        edge[u].push_back(v);
    }
    for(auto u: a){
        memset(check, false, sizeof(check));
        mp[u]++;
        dfs(u);
    }
    int cnt = 0;
    for(int i = 1; i <= n; i ++)
        if(mp[i] == k) 
            ++cnt;
    cout << cnt << endl;
    return 0;
} 