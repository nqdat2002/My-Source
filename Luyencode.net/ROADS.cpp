#include <bits/stdc++.h>
#define ll long long
#define X first
#define Y second
using namespace std;

const int N = 1e3 + 2;
typedef pair <ll,ll> ii;

struct edge{
    int x,y;
    ll w;
};
bool operator < (const edge &a, const edge &b){
    return a.w < b.w;
}

int cha[N],bac[N];
bool dau[N][N];
vector <edge> a;
int n,m;
double res;

void enter(){

    scanf("%d%d",&n,&m);
    vector <ii> e;
    e.push_back({0,0});
    ll x,y;
    for (int i = 1; i <= n; i++){
        scanf("%lld%lld",&x,&y);
        e.push_back({x,y});
    }
    for (int i = 1; i <= m; i++){
        scanf("%lld%lld",&x,&y);
        dau[x][y] = true;
    }
    int nn = e.size();

    for (int i = 1; i < nn; i++)
    for (int j = 1; j < nn; j++){
        if (i == j) continue;
        ll dis = (e[j].X-e[i].X)*(e[j].X-e[i].X) + (e[j].Y-e[i].Y)*(e[j].Y-e[i].Y);
        if (dau[i][j]) dis = 0;
        a.push_back({i,j,dis});
    }
    sort(a.begin(),a.end());
}
int root(int x){

    return (cha[x] == x) ? x : (cha[x] = root(cha[x]));
}
void join(int x,int y,ll val){

    int u = root(x);
    int v = root(y);
    if (u == v) return;
    if (bac[u] == bac[v]) bac[u]++;

    if (bac[u] < bac[v]) cha[u] = v;
        else cha[v] = u;
    res += sqrt(val);
}
int main(){

    enter();
    for (int i = 1; i <= n; i++)
        cha[i] = i;
    for (edge i : a){
        join(i.x,i.y,i.w);
    }
    cout << fixed << setprecision(2) << res;
    return 0;
}
