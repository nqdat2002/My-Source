#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin >> t;
	while (t--){
		int n; cin >> n;
		vector<pair<int, int> > a;
		for (int i = 0; i < n; i++){
			int x; cin >> x;
			a.push_back({x, i});
		}
		sort(a.begin(), a.end());
		int index = a[0].second, tmp = a[0].first;
		int res = -1;
		for (int i = 1; i < n; i++){
			if (a[i].first > tmp)
				res = max(res, a[i].second - index);
			if (index> a[i].second){
				index = a[i].second;
				tmp = a[i].first;
			}
		}
		cout << res << endl;
	}
	return 0;
}
