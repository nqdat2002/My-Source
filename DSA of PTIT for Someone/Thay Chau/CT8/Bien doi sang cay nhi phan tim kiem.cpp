#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >>n;
		set<int> s;
		for(int i = 0; i < n; ++i) {
			int x, y; cin >> x >> y;
			char c; cin >> c;
			s.insert(x);
			s.insert(y);
		}
		for(auto x: s) cout << x << " ";
		cout << endl;
	}
	return 0;
}
