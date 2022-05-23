#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		vector<int> a(n);
		for(auto &x: a) cin >> x;
		ll cnt = 0;
		stable_sort(a.begin(), a.end());
		for(int i = 0; i < n - 1; i ++){
			int t1 = a[i] + k;
			auto t2 = lower_bound(a.begin(), a.end(), t1) - a.begin();
			int t3 = t2 - 1 - i;
			if(t3 >= 1) 
				cnt += t3;
		}
		cout << cnt << endl;
	}
	return 0;
}
