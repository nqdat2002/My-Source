#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;

const ll mod = 1e9 + 7;
const int oo = 1e9;

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

void FileIO() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}

// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date: 07/03/22 10:30
// Program: Dijkstra
// -------------------  Your code STARTS here !!!---------------------------

int n, m, st, en, k;
int D[10005], parent[10005], D2[10005];
vector<p> List[10005], List2[10005];
priority_queue<p, vector<p>, greater<p> > q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t = 1;
	while (t--) {
		cin >> n >> m >> k >> st >> en;
		for (int i = 0; i < n; i++) List[i].clear(), List2[i].clear();
		for (int i = 1; i <= m; i++) {
			int u, v, w; cin >> u >> v >> w;
			List[u].push_back({w, v});
			List2[v].push_back({w, u});
		}
		memset(D, 0x3f, sizeof(D));
		D[st] = 0;
		while (!q.empty()) q.pop();
		q.push({0, st});
		while (!q.empty()) {
			int u = q.top().second, dmin = q.top().first;
			q.pop();
			if (dmin > D[u]) continue;
			for (auto v : List[u]) {
				// v.first = d_u_v
				// v.second = vertex which is nearest of u
				if (D[v.second] > D[u] + v.first) {
					D[v.second] = D[u] + v.first;
					q.push({D[v.second], v.second});
				}
			}
		}
		memset(D2, 0x3f, sizeof(D2));
		D2[en] = 0;
		q.push({0, en});
		while (!q.empty()) {
			int u = q.top().second;
			int dmin = q.top().first;
			q.pop();
			if (dmin > D2[u]) continue;
			for (auto v : List2[u]) {
				if (D2[v.second] > D2[u] + v.first) {
					D2[v.second] = D2[u] + v.first;
					q.push({D2[v.second], v.second});
				}
			}
		}
		int res = min(D[en], D2[st]);
		while (k--) {
			int u, v, w; cin >> u >> v >> w;
			if (D[u] + D2[v] + w < res) res = D[u] + D2[v] + w;
			if (D2[u] + D[v] + w < res) res = D2[u] + D[v] + w;
		}
		if (res > 1e9) cout << -1;
		else cout << res;
		cout << endl;
	}
	return 0;
}
