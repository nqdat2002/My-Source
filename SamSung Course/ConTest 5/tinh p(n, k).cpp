#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9 + 7;
int n, k;
ll p(int n, int k){
	ll res = 1;
	for(int i = n - k + 1; i <= n; i ++)
		res = res * i % mod;
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		cout << p(n, k) << endl;
	}
	return 0;
}