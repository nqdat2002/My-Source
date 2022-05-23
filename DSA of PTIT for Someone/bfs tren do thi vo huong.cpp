#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check[1005];
vector<int> edge[1005];
int n, m, start;
void bfs(int u){
	queue<int> q;
	q.push(u);
	check[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		check[v] = true;
		cout << v << " ";
		for(auto x: edge[v]){
			if(!check[x]){
				q.push(x);
				check[x] = true;
			}
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m >> start;
		memset(check, false, sizeof(check));
		for(int i = 0; i < 1005; ++i) edge[i].clear();
		for(int i = 0; i < m; ++i){
			int u, v; cin >> u >> v;
			edge[u].push_back(v);
			edge[v].push_back(u);
		}
		bfs(start);
		cout << endl;
	}
}
