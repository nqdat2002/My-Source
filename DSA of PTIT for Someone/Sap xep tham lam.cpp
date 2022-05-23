#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isswap(int a[], int n, int b[]){
	for(int i = 0; i < n; ++i){
		if(b[i] != a[n - i - 1] && a[i] != b[i])
			return false;
	}
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; ++i) cin >> a[i], b[i] = a[i];
		sort(b, b + n);
		if(isswap(a, n, b)) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
	return 0;
}
