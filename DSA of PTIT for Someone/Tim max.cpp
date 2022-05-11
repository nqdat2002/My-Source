#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
typedef long long ll;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int i = 0; i < n; ++i) cin >> a[i];
    	sort(a, a + n);
    	// i = 0 -> n - 1
    	// kq max -> a[i] * i max -> sort -> a[n - 1] * (n - 1) + ... + a[0] * 0
    	ll ans = 0;
    	for(int i = 0; i < n; ++i){
    		ans += (a[i] * i);
    		ans %= mod;
    	}
    	cout << ans << endl;
    }
	return 0;
}