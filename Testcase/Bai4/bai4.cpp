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

int a[10], b[10], n;
bool visited[10];
void init(){
	memset(a, 0, sizeof(a));
	cin >> n;
	for(int i = 1; i <= n; i ++)
		cin >> b[i];
	sort(b + 1, b + n + 1);
}
void output(){
	for(int i = 1; i <= n; i ++)
		cout << b[a[i]] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = 1; j <= n; j ++){
		if(!visited[j]){
			a[i] = j;
			visited[j] = true;
			if(i == n) output();
			else Try(i + 1);
			visited[j] = false;
		}
	}
}
int main(){
	freopen("test3.inp", "r", stdin);
	freopen("test3.out", "w", stdout);
	init();
	Try(1);
	return 0;
}

