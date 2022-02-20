#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int N = 1010;
vector <int> a[N], luu[N];
bool d[N];
int n,m,cnt;

void dfs(int u){

    luu[cnt].push_back(u);
    d[u] = true;
    for (int v : a[u]){
        if (!d[v]) dfs(v);
    }
}
int main(){

    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1,x,y; i <= m; i++){
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    cnt = 0;
    for (int i = 1; i <= n; i++){
        if (!d[i]){
            dfs(i);
            sort(luu[cnt].begin(),luu[cnt].end());
            cnt++;
        }
    }
    cout << cnt << '\n';
    for (int i = 0 ; i < cnt; i++){
        cout << luu[i].size();
        for (int j : luu[i]) cout << ' ' << j;
        cout << '\n';
    }
    return 0;
}
