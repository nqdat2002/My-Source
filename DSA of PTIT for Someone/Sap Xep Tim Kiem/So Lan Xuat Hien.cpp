#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n+5]; 
		for(int i = 0; i < n; i ++) cin >> a[i];
		int dem = 0;
		for(int i = 0; i < n; i++)
			if(a[i] == k) dem++;
		if(dem > 0) cout << dem;
		else cout << -1;
		cout << endl;
	}
	return 0;
}
