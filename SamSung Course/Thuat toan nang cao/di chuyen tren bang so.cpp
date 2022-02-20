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

int n, m;
vector < vector <int> > a;
vector < vector <bool> > vs;

int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, -1, 1};

struct cmp{
	bool operator () (pair <int, pair <int, int> > g, pair <int, pair <int, int> > f){
		return g.F > f.F;
	}
};

void BFS(){
	priority_queue < pair <int, pair <int, int> >, vector <pair <int, pair <int, int> > >, cmp> q;
	q.push(mp(a[0][0], mp(0, 0)));
	vs[0][0] = 1;
	while (!q.empty()){
		int w = q.top().F;
		pair <int, int> u = q.top().S;
		q.pop();
		if(u. F == n - 1 && u.S == m - 1){
			cout << w;
			return;
		}
		fori(i, 0, 4){
			pair <int, int> v;
			v = mp(u.F + X[i], u.S + Y[i]);
			if(v.F < n && v.S < m && v.F >= 0 && v.S >= 0 && vs[v.F][v.S] == 0){
				vs[v.F][v.S] = 1;
				q.push(mp(w + a[v.F][v.S], v));
			}
		}
	}
	
}


void xl (){
	cin >> n >> m;
	a.clear(); 
	a.resize(n, vector <int> (m));
	fori(i, 0, n) {
		fori(j, 0, m) cin >> a[i][j];
	}

	vs.clear(); 
	vs.resize(n, vector <bool> (m, 0));

	BFS();

	
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
















/*
    sử dụng dijsktra để tính khoảng cách
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ii pair<int, int>
#define tp tuple<int,int,int>
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define set_vect(a,n); vector<int>a(n); for(auto &z : a)cin>>z;

const int N =  505;
const int inf = 1e9 + 5;

int n,m;
int a[N][N];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
int dist[N][N];

priority_queue <tp,vector<tp>,greater<tp>> q;

bool check(int x,int y){
    return (1 <= x && x <= n && 1 <= y && y <= m);
}

void dijkstra(int x,int y){
    dist[x][y] = a[x][y];
    q.push({dist[x][y],x,y});
    while(q.size()){
        tp tmp = q.top(); q.pop();
        x = get<1>(tmp);
        y = get<2>(tmp);
        int w = get<0>(tmp);
        for(int i = 0 ; i < 4 ; i++){
            int u = x + dx[i];
            int v = y + dy[i];
            if(check(u,v)){
                if(dist[u][v] > a[u][v] + w){
                    dist[u][v] = a[u][v] + w;
                    q.push({dist[u][v],u,v});
                }
            }
        }
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 1; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j],dist[i][j] = inf;
    dijkstra(1,1);
    cout << dist[n][m] << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    int t = 1; cin >> t;
    while(t--){solve();}
    return 0;
}

// Code By CodeWar :3 (Bao Trung)