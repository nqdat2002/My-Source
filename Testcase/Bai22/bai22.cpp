#include <bits/stdc++.h>
const int mod = 1e9 + 7;
using namespace std;
typedef long long ll;
ll power(ll n, ll k){
	if(k == 0)
		return 1;
	ll t = power(n, k / 2);
	if(k & 1) 
		return n * (t * t % mod) % mod;
	return (t * t % mod);
}
int main() {
//	freopen("10.inp", "r", stdin);
//	freopen("10.out", "w", stdout);
    ll n, k; cin >> n >> k;
    cout << power(n, k) << endl;
}
    
