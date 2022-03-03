#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for(auto &x: a) cin >> x;
		sort(a.begin(), a.end());
		long long dem = 0;
		for(int i = 0; i < n - 1; i ++){
			int m = lower_bound(a.begin(), a.end(), a[i] + k) - a.begin();
			dem += m - i - 1;
		}
		cout << dem << endl;
	}
	return 0;
}
