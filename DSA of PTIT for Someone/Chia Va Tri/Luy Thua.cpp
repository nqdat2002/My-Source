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
int main(){
	int t; cin >> t;
	while(t--){
		ll n, k; cin >> n >> k;
		cout << Power(n, k) << endl;
	}
	return 0;
}
