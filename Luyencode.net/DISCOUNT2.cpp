#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n; cin >> n;
	int a[n];
	for(auto &x: a) cin >> x;
	sort(a, a + n);
	int t = n - n / 4;
	ll res = 0;
	for(int i = 0; i < t; ++i) res += a[i];
	cout << res << endl;
}
