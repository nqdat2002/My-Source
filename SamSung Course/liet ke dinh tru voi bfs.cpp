#include <bits/stdc++.h>
using namespace std;
vector <int> a[1005];
bool chuaxet[1005];
int truoc[1005];
void bfs(int u) {
    queue <int> q;
    q.push(u);
    while (!q.empty()) {
        int x = q.front(); q.pop();
        chuaxet[x] = true;
        for (int i = 0; i < a[x].size(); i++) {
            int y = a[x][i];
            if (!chuaxet[y]) {
                chuaxet[y] = true;
                truoc[y] = x;
                q.push(y);
            }
        }
    }
}
int main(){
	int t; cin >> t;
	while(t--){
		for(int i = 0; i < 1005; i ++)
			a[i].clear();
		int n, b; cin >> n >> b;
		for(int i = 0; i < b; i ++){
			int u, v;
			cin >> u >> v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		memset(chuaxet, false, sizeof(chuaxet));
		int res = 0;
		for(int i = 1; i <= n; i ++){
			if(!chuaxet[i]){
				res ++;
				bfs(i);
			}
		}
		for(int i = 1; i <= n; i ++){
			memset(chuaxet, false, sizeof(chuaxet));
			chuaxet[i] = true;
			int cnt = 0;
			for(int j = 1; j <= n; j ++){
				if(!chuaxet[j]){
					cnt++;
					bfs(j);
				}
			}
			if(cnt > res) cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}