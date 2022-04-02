#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 3;
bool d[N];
int bac[N],cha[N];

int root(int x){
    return (cha[x] == x) ? x : (cha[x] = root(cha[x]));
}
void join(int x,int y){
    int u = root(x);
    int v = root(y);
    if (u == v) return;
    if (bac[u] > bac[v]) cha[v] = u;
        else cha[u] = v;
}
int check(int u,int v){ return (root(u) == root(v)); }
int main(){
    int p, x, y, z;
    cin >> p;
    while (p--){
        cin >> x >> y >> z;
        if (!d[x]) cha[x] = x, d[x] = true;
        if (!d[y]) cha[y] = y, d[y] = true;
        if (z == 1) join(x, y);
        else 
            cout << check(x, y) << "\n";
    }
    return 0;
}
