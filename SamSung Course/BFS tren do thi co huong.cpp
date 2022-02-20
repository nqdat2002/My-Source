#include <bits/stdc++.h>
using namespace std;
#define MAX 1005
bool chuaxet[MAX];
vector<int> arr[MAX];
void bfs(int u) {
    memset(chuaxet, true, sizeof(chuaxet));
    int i, x, y;
    queue <int> q;
    q.push(u);
    chuaxet[u] = false;
    while (!q.empty()) {
        int x = q.front(); q.pop();
        cout << x << " ";
        for (int i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                chuaxet[y] = false;
                q.push(y);
            }
        }
    }
    cout << endl;
}
int main() {
    int t, v, e, u, tmp1, tmp2;
    cin >> t;
    while (t--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        cin >> v >> e >> u;
        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
         //   arr[tmp2].push_back(tmp1);
        }
        bfs(u);
    }
    return 0;
}

/*
//c2

int n, m, u;
bool chuaxet[1005];
vector<int> List[1005];
void bfs(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u] = false;
    cout << u << " ";
    while(!q.empty()){
        int x = q.front(); q.pop();
        for(int i = 0; i < List[x].size(); i++){
            int y = List[x][i];
            if(chuaxet[y]){
                q.push(y);
                chuaxet[y] = false;
                cout << y << " ";
            }
        }
    }
    cout << endl;
}
int main(){
    int t, u, x, y, i;
    cin >> t;
    while(t--){
        memset(chuaxet, true,sizeof(chuaxet));
        for(i = 0; i < 1005; i ++) List[i].clear();
        cin >> n >> m >> u;
        for(i = 1; i <= m; i ++){
            cin >> x >> y;
            List[x].push_back(y);
            List[y].push_back(x);
        }   
        bfs(u);
//      cout << endl;
    }
    return 0;
}
*/