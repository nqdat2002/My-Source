#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int p = 1e9 + 7;
ll Power(ll n, ll k){
	if(k == 0)
		return 1;
	ll t = Power(n, k / 2); 
	if(k % 2 == 0)
		return t * t % p;
	else 
		return n * (t * t % p) % p;
}
ll daonguoc(ll n){
	ll res = 0;
	while(n > 0){
		res = 10 * res + n % 10;
		n /= 10;
	}
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n;
		k = rev(n);
		cout << Power(n, daonguoc(n)) << endl;
	}
	return 0;
}

