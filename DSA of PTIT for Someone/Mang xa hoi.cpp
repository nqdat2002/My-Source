#include <bits/stdc++.h>
using namespace std;
bool check[100005];
vector<int> edge[100005];
void DFS(int u){
    check[u] = true;
    for(auto v: edge[u]){
        if(!check[v])
            DFS(v);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 0; i < 100005; i ++) edge[i].clear();
        int n, m; cin >> n >> m;
        for(int i = 1; i <= m; i ++){
            int x, y; cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        memset(check, false, sizeof(check));
        bool ok = false;
        DFS(1);
        for(int i = 1; i <= n; ++i){
            if(!check[i]){
                ok = true;
                cout << "NO";
                break;
            }
        }
        if(!ok) cout << "YES";
        cout << endl;
    }
    return 0;
}
