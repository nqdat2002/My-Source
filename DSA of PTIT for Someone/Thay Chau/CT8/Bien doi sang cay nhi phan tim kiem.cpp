#include <iostream>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >>n;
		set<int> s;
		for(int i = 0; i < n; ++i) {
			int x; cin >> x;
			s.insert(x);
		}
		for(auto x: s) cout << x << " ";
		cout << endl;
	}
	return 0;
}
