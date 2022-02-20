#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	int k, n , p, tmp = 0, x = 1;
	cin >> a >> k >> n >> p;
	for(int i = 0; i < k; i ++){
		tmp = (tmp * n + a[i] - 48) % p;
		x = (x * n) % p;
	}
	int res = tmp;
	for(int i = k; i < a.size(); i ++){
		int c = a[i - k] - 48;
		tmp = (((tmp * n + a[i] - 48) % p - x * c % p) % p + p) % p;
		res += tmp;
	}
	cout << res << endl;
	return 0;
}