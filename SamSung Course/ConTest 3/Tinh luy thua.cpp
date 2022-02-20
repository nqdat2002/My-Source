#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
const ll p = 1e9 + 7;
ll Mul(ll a,ll b, ll p){
	if(b == 0) 
		return 0ll;
	ll tmp = Mul(a, b / 2, p);
	if(b & 1) 
		return (tmp * 2 + a) % p;
	return tmp * 2 % p;
}
ll PoW(ll n, ll k, ll p){
	if(k == 0) 
		return 1;
	if(k == 1) 
		return n % p;
	ll tmp = PoW(n, k / 2, p);
	ll a = Mul(tmp, tmp, p);
	if(k & 1) 
		return a * n % p;
	return a % p;
}
ll Power(ll n, ll k) {
    if (k == 0)
        return 1;
    ll tmp = Power(n, (k / 2));
    if (k % 2 == 0)
        return tmp * tmp % p;

    return n * (tmp * tmp % p) % p;
}
int main(){
    while(1){
		cin >> n >> k;
		if(n == 0 && k == 0) break;
		else
	    	cout << Power(n, k) << endl;	
	}
	return 0;
}
