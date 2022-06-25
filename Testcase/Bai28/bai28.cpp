#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("20.inp", "r", stdin);
	freopen("20.out", "w", stdout);
	int n; cin >> n;
	priority_queue<long long, vector<long long>, greater<long long> > q;
	for(int i = 0; i < n; i ++){
		ll x; cin >> x; q.push(x);
	}
	ll res = 0;
	while(q.size() > 1){
		ll t = q.top(); q.pop();
		ll u = q.top(); q.pop();
	    ll x = (u + t) % mod;
		res = (res + x) % mod;
		q.push(x);
	}
	cout << res << endl;
	return 0;
}
