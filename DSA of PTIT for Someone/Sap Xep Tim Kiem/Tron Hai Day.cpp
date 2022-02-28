#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n + m + 5];
		for(int i = 0; i < n + m; i ++) cin >> a[i];
		sort(a, a + n + m);
		for(int i = 0; i < n + m; i ++) cout << a[i] << " ";
		cout << endl;
	}
}
