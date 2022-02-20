#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll p = 1e9 + 7;
ll Solve(ll arr[], ll n) {
    priority_queue<ll, vector<ll>, greater<ll> > q(arr, arr + n);
    ll res = 0;
    while (q.size() > 1) {
        ll f = q.top();
       	q.pop();
        ll s = q.top();
        q.pop();
        res += (f % p + s % p) % p;
        res %= p;
        q.push((f % p + s % p) % p);
    }
    return res;
}
int main() {
	int t; cin >> t;
	while(t--){
	    ll n; cin >> n;
	    ll arr[n];
	    for (int i = 0; i < n; i++) cin >> arr[i];
	    cout << Solve(arr, n) << endl;
	}
    return 0;
}
