#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		set<int> st;
		for(int i = 0; i < n; i ++){
			string x; cin >> x;
			for(int i = 0; i < x.size(); i ++)
				st.insert(x[i] - '0');
		}
		for(auto y: st) cout << y << " ";
		cout << endl;
	}
	return 0;
}
