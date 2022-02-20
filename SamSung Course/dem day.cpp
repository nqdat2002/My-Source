#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
const ll p = 123456789;
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
int main(){
	int t; cin >> t;
	while(t--){
		cin >> k;
		cout << PoW(2, k - 1, p) << endl;
	}
	return 0;
}
