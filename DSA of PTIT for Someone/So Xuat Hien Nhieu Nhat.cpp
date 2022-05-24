#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<int, int> mp;
		for(int i = 0; i < n; ++i){
			int x; cin >> x;
			mp[x]++;
		}
		int res = -1;
		for(auto x: mp){
			res = max(res, x.second);
		}
		if(res == -1 || res <= n / 2) cout << "NO";
		else if(res > n / 2) {
			for(auto x: mp){
				if(x.second == res){
					cout << x.first;
					break;
				}
			}
		}
		cout << endl;
	}
}
