#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 1e5 + 3;
vector <int> a[N];
bool dau[N];
int n,m,k,d[N];

void enter(){

    int x,y;
    scanf("%d%d%d",&n,&m,&k);
    for (int i = 1; i <= m; i++){
        scanf("%d%d",&x,&y);
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
int solve(int u){

    int cnt = 0;
    for (int v : a[u]){
        if (dau[v]) continue;
        dau[v] = true;
        int tmp = solve(v);
        if (tmp >= k){
            cnt++;
            d[v] = true;
        }
    }
    return cnt;
}
int main(){

    enter();
    queue <int> q;
    for (int i = 1; i <= n; i++){
        d[i] = a[i].size();
        if (a[i].size() < k){
            q.push(i);
            dau[i] = true;
        }
    }
    while (!q.empty()){
        int u = q.front();
        q.pop();
        for (int v : a[u]){
            d[v]--;
            if (!dau[v] && d[v] < k){
                q.push(v);
                dau[v] = true;
            }
        }
    }
    vector <int> ans;
    for (int i = 1; i <= n; i++){
        if (!dau[i]) ans.push_back(i);
    }
    cout << ans.size() << "\n";
    for (int i : ans) cout << i << " ";
    return 0;
}
