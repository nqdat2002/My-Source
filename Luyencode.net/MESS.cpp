#include <iostream>
#include <vector>
#include <queue>
#define X first
#define Y second
using namespace std;
const int N = 1e4 + 3;
typedef pair <int,int> ii;
vector <ii> a[N];
int d[N];
int n,s,t;

void enter(){

    int m;
    cin>>n>>m;
    cin>>s>>t;
    int x,y,w;
    for (int i = 1; i <= m; i++){
        cin>> x >> y >> w;
        a[x].push_back({w,y});
        a[y].push_back({w,x});
    }
}
void dijkstra(){
    priority_queue <ii, vector<ii>, greater<ii> > q;
    fill(d,d+N,1e9);
    d[s] = 0;
    q.push({0,s});
    while (!q.empty()){
        int u = q.top().Y;
        q.pop();
        for (ii v : a[u]){
            if (u == v.Y) continue;
            if (d[v.Y] > d[u] + v.X){
                d[v.Y] = d[u] + v.X;
                q.push({d[v.Y],v.Y});
            }
        }
    }
}
int main(){
    enter();
    dijkstra();
    cout << d[t];
    return 0;
}
