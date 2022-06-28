#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;

const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
vector<int> adj[100005];
queue<int> q;
bool vs[100005];
int dis[100005], vertex[100005];
int n, m, k;
void bfs(){
	while (!q.empty()) {
        int v = q.front(); q.pop();
        for(auto u: adj[v]){
        	if(!vs[u]){
        		vs[u] = true;
        		dis[u] = dis[v] + 1;
        		q.push(u);
        	}
        }
    }
    for(int i = 1; i <= n; ++i) cout << dis[i] << " ";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; ++i){
        	cin >> vertex[i];
        	q.push(vertex[i]);
        	vs[vertex[i]] = true;
        }
        cin >> m;
        for(int i = 1; i <= m; ++i){
        	int u, v; cin >> u >> v;
        	adj[u].push_back(v);
        	adj[v].push_back(u);
        }
        bfs();
    }
    return 0;
}
