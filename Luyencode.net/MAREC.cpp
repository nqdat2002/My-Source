#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		mp[x]++;
	}
	int r1 = 0, r2 = 0;
	for (auto x: mp){
		if (x.second >= 2) r1++;
		if (x.second >= 4) r2++;
	}
	cout << r2 + (r1 - 1) * r1 / 2 << endl;
	return 0;
}
