#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		int x;
		for(int i = 0; i < n; i ++){
			cin >> x;
			cnt += x;
		}
		cout << n - cnt << endl;
	}
	return 0;
}
