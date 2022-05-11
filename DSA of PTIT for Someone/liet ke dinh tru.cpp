#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[1005];
vector<int> edge[1005];
int n, m, connect;
void bfs(int u){
    queue<int> q;
    q.push(u);
    check[u] = true;
    while(!q.empty()){
        int v = q.front(); q.pop();
        check[v] = true;
        for(auto x: edge[v]){
            if(!check[x]){
                q.push(x);
                check[x] = true;
            }
        }
    }
}
void Dinhtru(int u){
    memset(check, false, sizeof(check));
    check[u] = true;
    int cnt = 0;
    for(int i = 1; i <= n; ++i){
        if(!check[i]){
            ++cnt;
           bfs(i);
        }
    }
    if(cnt > connect) cout << u << " ";
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
                bfs(i);
            }
        }
        for(int i = 1; i <= n; ++i)
            Dinhtru(i);
        cout << endl;
    }
    return 0;
}