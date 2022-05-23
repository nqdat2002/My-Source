#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int, int> > vp;
		for(int i = 0; i < n; i ++){
			int x, y; cin >> x >> y;
			vp.push_back({x, y});
		}
		int cnt = 1, index = 0;
		sort(vp.begin(), vp.end(), cmp);
		for(int j = 1; j < n; j ++){
			if(vp[j].first >= vp[index].second) {
				++cnt;
				index = j;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
