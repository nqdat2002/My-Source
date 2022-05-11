#include <bits/stdc++.h>
using namespace std;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};
int n, m;
int dis[505][505], a[505][505];
priority_queue <pair<pair<int, int>, int>, 
                vector<pair<pair<int, int>, int> >,
                greater<pair<pair<int, int>, int> > > q;

bool check(int x, int y){ return (x <= n && y <= m && x >= 1 && y >= 1);}

void Dijkstra(){
    dis[1][1] = a[1][1];
    while(!q.empty()) q.pop();
    q.push({{1, 1}, dis[1][1]});
    while(!q.empty()){
        pair<int, int> c = q.top().first;
        int x = c.first, y = c.second, w = q.top().second;
        q.pop();
        for(int i = 0; i < 4; ++i){
            int u = x + dx[i], v = y + dy[i];
            if(check(u, v)){
                if(dis[u][v] > a[u][v] + w){
                    dis[u][v] = a[u][v] + w;
                    q.push({{u, v}, dis[u][v]});
                }
            }
        }
    }
    cout << dis[n][m] << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j) cin >> a[i][j], dis[i][j] = 1e9;
        Dijkstra();
    }
    return 0;
}