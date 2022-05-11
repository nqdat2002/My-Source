#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check[1005];
vector<int> edge[1005];
int n, m;

int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        vector<pair<int, int> > v(n + 5);
        for(int i = 1; i <= m; i ++){
            int x, y; cin >> x >> y;
            v[x].second ++;  // ban bac vao
            v[y].first ++;  // ban bac ra
        }
        bool ok = false;
        for(int u = 1; u <= n; ++u){
            if(v[u].first != v[u].second){
                cout << 0;
                ok = true;
                break;
            }
        }
        if(!ok) cout << 1;
        cout << endl;
    }
    return 0;
}
