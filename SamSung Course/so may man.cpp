#include <bits/stdc++.h>
using namespace std;
void Solve(int n){
	vector<int> a;
	while(n >= 4){
		if(n % 7 == 0){
			a.push_back(7);
			n = n - 7;
			continue;
		}
		if(n >= 4){
			a.push_back(4);
			n = n - 4;
			continue;
		}
	}
	if(n == 0){
		for(int i = 0; i < a.size(); i ++) cout << a[i];
		cout << endl;
	}
	else cout << -1 << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		Solve(n);
	}
	return 0;
}