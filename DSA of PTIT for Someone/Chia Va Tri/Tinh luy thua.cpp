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
    int t; cin >> t;
    while(1){
        ll n, k; cin >> n >> k;
        if(n == k && k == 0)
            break;
        cout << Power(n, k) << endl;
    }
    return 0;
}
