#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i ++){
		int x; cin >> x;
		a.push_back(x);
	}
	int cnt = 0;
	for(int i = 0; i < n - 1; i ++){
		for(int j = i + 1; j < n; j ++){
			if(__gcd(a[i], a[j]) == 1)
				cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
