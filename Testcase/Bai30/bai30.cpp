#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;

ll Power(ll n, ll k){
	if(k == 0)
		return 1ll;
	ll t = Power(n, (k / 2));
	if(k % 2 == 0)
		return t * t % mod;
	return n * (t * t % mod) % mod; 
}

int main(){
	freopen("8.inp", "r", stdin);
	freopen("8.out", "w", stdout);
    int n; cin >> n;
    ll a[n], b[n];
    for(auto &x: a) cin >> x;
    for(auto &x: b) cin >> x;
    ll res = 0;
    for(int i = 0; i < n; ++i){
    	res += Power(a[i], b[i]);
    	res %= mod;
	}
	cout << res << endl;
    return 0;
}
