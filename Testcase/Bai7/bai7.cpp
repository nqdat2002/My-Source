#include <bits/stdc++.h>
using namespace std;

int main(){
	freopen("test3.inp", "r", stdin);
	freopen("test3.out", "w", stdout);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> st;
		for(int i = 0; i < n; i ++){
			string x; cin >> x;
			for(int i = 0; i < x.size(); i ++)
				st.insert(x[i] - '0');
		}
		vector<int> v;
		for(auto y: st) v.push_back(y);
		reverse(v.begin(), v.end());
		for(auto y: v) cout << y << " ";
		cout << endl;
	}
	return 0;
}

