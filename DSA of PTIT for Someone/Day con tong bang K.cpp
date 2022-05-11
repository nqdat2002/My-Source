#include <bits/stdc++.h>
using namespace std;
int n, a[15], c[15], k;
vector<vector<int> > res;
void Try(int i){
	for(int j = 0; j <= 1; ++j){
		a[i] = j;
		if(i == n){
			int sum = 0;
			vector<int> v;
			for(int h = 1; h <= n; ++h){
				sum += a[h] * c[h];
				if(a[h] == 1) v.push_back(c[h]);
			}
			if(sum == k) res.push_back(v);
		}
		else Try(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i ++) cin >> c[i];
		sort(c + 1, c + n + 1);
		res.clear();
		Try(1);
		sort(res.begin(), res.end());
		if(!res.size()) cout << -1;
		else{
		
			for(auto x: res){
				cout << "[";
				for(int i = 0; i < x.size() - 1; ++i) cout << x[i] << " ";
				cout << x[x.size() - 1] << "] ";
			}
		}
		cout << endl;
	}
}
