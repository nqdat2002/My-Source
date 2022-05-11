#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[1005];
vector<int> edge[1005];
int n, m, connect;
bool cmp(int u, int v, int a, int b){
    if ((u == a &&  v == b ) || (v == a && u == b)) 
        return false;
    return true;
}
void bfs(int u, int a, int b){
    queue<int> q;
    q.push(u);
    check[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        check[v] = true;
        for(auto x: edge[v]){
            if(!check[x] && cmp(v, x, a, b)){
                q.push(x);
                check[x] = true;
            }
        }
    }
}
void Canhcau(int u, int v){
    memset(check, false, sizeof(check));
    int cnt = 0;
    for(int i = 1; i <= n; ++i){
        if(!check[i]){
            ++cnt;
           bfs(i, u, v);
        }
    }
    if(cnt > connect) cout << u << " " << v << " ";
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
        connect = 0;
        for(int i = 1; i <= n; ++i){
            if(!check[i]){
                ++connect;
                bfs(i, -1, -1);
            }
        }
        for (int u = 1; u <= n; ++u){
            for (auto v: edge[u]){
                if(u > v) continue;
                else Canhcau(u, v);
            }
        }
        cout << endl;
    }
    return 0;
}