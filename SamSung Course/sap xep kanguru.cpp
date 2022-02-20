#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> a(n);
		for(int i = 0; i < n; i ++) cin >> a[i]; 
		sort(a.begin(), a.end());
		int m = n / 2 + n % 2 - 1;
		int r = n - 1, l = m;
		int res = 0;
		while(r >= m && l >= 0){
			if(a[r] >= 2 * a[l]){
				res ++;
				r --;
				l --; 
			} 
			else l --; 
		} 
		cout << res + n - 2 * res << endl; 
	} 
	return 0; 
}
