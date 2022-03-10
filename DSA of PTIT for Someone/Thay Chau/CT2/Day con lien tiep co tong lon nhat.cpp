#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n]; 
		for(auto &x: a) cin >> x;
		int res = INT_MIN;
		for(int i = 0; i < n; i ++){
			int sum = a[i];
			for(int j = i + 1;j < n; j ++){
				sum += a[j];
				res = max(sum, res); 
			} 
		} 
		cout << res << endl; 
	}
	return 0; 
}
