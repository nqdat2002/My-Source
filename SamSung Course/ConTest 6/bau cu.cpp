#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int a[m + 5] = {0};
	for(int i = 0; i < n; i ++){
		int t; cin >> t;
		a[t] ++;
	}
	int mx = 0;
	for(int i = 1; i <= m; i ++) {
		mx = max(mx, a[i]);
	}
	int p = -1, l = -1;
	for(int i = 1; i <= m; i ++){
		if(p < mx && p < a[i] && a[i] < mx){
			p = a[i];
			l = i;
		} 
	}
	if(l != -1 && a[l] != 0) cout << l;
	else cout << "NONE";
}