#include <bits/stdc++.h>
// code by hoangbonduy
using namespace std;
#define int long long
typedef pair<int, int> pii;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
#define endl "\n"
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLR(v) v.rbegin(), v.rend()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define TC(t) while (t--)
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin >> n >> q;
    vi arr(n);
    FOR(i,0,n) cin >> arr[i];
    vi prefix(n,0);
    	if (arr[0] < 0) prefix[0] = 0;
    	else prefix[0] = arr[0];
    	
    	FOR(i,1,n) {
    		if (arr[i] < 0) {
    			prefix[i] = prefix[i-1];
    		}
    		else prefix[i] = prefix[i-1] + arr[i];
    	}
    TC(q) {
    	int u,v;
    	cin >> u >> v;
    	--u;
    	--v;
    	
    	if (u == 0) cout << prefix[v] << endl;
    	else {
    		cout << prefix[v] - prefix[u-1] << endl;
    	}
    }
}
