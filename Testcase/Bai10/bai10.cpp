#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("test1.inp", "r", stdin);
	freopen("test1.out", "w", stdout);
	int n; cin >> n;
	int a[n];
	int mx = 0;
	map<int, int> mp;
	for(auto &x: a) {
		cin >> x;
		mx = max(mx, x);
		mp[x]++;
	}
	cout << mp[mx] << endl;
}
