#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

vector < vector <int> > G;
vector <bool> vs;
int V, E, u, v;

void BFS(){
	queue <int> q;
	q.push(1);
	vs[1] = 1;
	while (!q.empty()){
		u = q.front(); q.pop();
		fori(i, 0, G[u].size()){
			v = G[u][i];
			if(vs[v] == 0) {
				vs[v] = 1;
				q.push(v);
			}
		}
	}
	
}

void xl (){
	cin >> V >> E;
	vs.clear(); vs.resize(V + 1);
	G.clear(); G.resize(V + 1);
	while (E--){
		cin >> u >> v;
		G[u].pb(v);
		G[v].pb(u);
	}
	BFS();

	fori(i, 1, V + 1) if(!vs[i]){
		cout << "NO";
		return;
	}
	cout << "YES";
	
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}