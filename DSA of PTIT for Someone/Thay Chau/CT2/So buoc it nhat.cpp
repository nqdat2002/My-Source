#include <bits/stdc++.h>
using namespace std;
int c[1001]; 
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(auto &x: a) cin >> x;
		int res = 1; 
		c[0] = 1; 
		for(int i = 1; i < n; i ++){
			c[i] = 1;
			for(int j = 0; j < i; j ++){
				if(a[i] >= a[j] && c[i] < c[j] + 1) 
					c[i] = c[j] + 1; 
			} 
			res = max(res, c[i]); 
		} 
		cout << n - res << endl; 
	} 
	return 0; 
}
