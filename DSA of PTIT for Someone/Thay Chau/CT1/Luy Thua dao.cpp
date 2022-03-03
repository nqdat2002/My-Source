#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int m = 1e9 + 7;
ll Mod(ll n, ll k){
	if(k == 0)
		return 1;
	if(k % 2 == 0)
		return Mod(n, k / 2) * Mod(n, k / 2) % m;
	return n * (Mod(n, k / 2) * Mod(n, k / 2) % m) % m;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	ll n, k, r = 0;
    	cin >> n;
    	k = n;
    	while(k > 0){
    		r = r * 10 + k % 10;
    		k /= 10;
		}
    	cout << Mod(n, r) << endl;
    }
}
