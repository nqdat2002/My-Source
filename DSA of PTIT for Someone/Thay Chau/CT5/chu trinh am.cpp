#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int adj[1005][1005], dis[1005];
int n, m;
void BellmanFord(){
    memset(dis, 1e9, sizeof(dis));
    dis[1] = 0;
    for(int k = 2; k <= n; ++k)
        for(int u = 1; u <= n; ++u)
            for(int v = 1; v <= n; ++v)
                if(dis[v] > dis[u] + adj[u][v])
                    dis[v] = dis[u] + adj[u][v];
    for(int u = 1; u <= n; ++u){
        for(int v = 1; v <= n; ++v){
            int w = dis[u] + adj[u][v];
            if(dis[v] > w){
                cout << 1 << endl;
                return;
            } 
        }
    }
    cout << 0 << endl;
}

int main() {
    int t; cin >> t;
    while (t--) {
        memset(adj, 1e6, sizeof(adj));
        cin >> n >> m;
        for(int i = 1; i <= m; ++i){
            int u, v, w; cin >> u >> v >> w;
            adj[u][v] = w;
        }
        BellmanFord();
    }
    return 0;
}