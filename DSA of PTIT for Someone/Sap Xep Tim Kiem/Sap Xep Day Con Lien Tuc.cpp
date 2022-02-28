#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n + 5], b[n + 5];
		for(int i = 0; i < n; i ++) {
			cin >> a[i];
			b[i] = a[i];
		}
		sort(b, b + n);
		int l, r;
		for(int i = 0; i < n; i ++){
			if(a[i] != b[i]){
				l = i;
				break;
			}
		}
		for(int i = n - 1; i >= 0; i --){
			if(a[i] != b[i]){
				r = i;
				break;
			}
		}
		cout << l + 1 << " " << r + 1 << endl;
	}
	return 0;
}

