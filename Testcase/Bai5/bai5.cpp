#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	freopen("test3.inp", "r", stdin);
	freopen("test3.out", "w", stdout);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		int sum = 0;
		for(auto &x: a){
			cin >> x;
			sum += x;
		}
		if(sum % 2 == 0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
