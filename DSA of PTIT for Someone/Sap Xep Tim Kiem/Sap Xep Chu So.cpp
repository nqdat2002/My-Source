#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		for(int i = 0; i < n; i++){
			string a; cin >> a;
			for(int j = 0; j < a.size(); j ++)
				s.insert(a[j] - 48);
		}
		for(auto x: s) cout << x << " ";
		cout << endl;
	}
}
