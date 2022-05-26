#include<iostream>
using namespace std;
typedef long long ll;
int main() {
	int t; cin >> t;
	while (t--) {
		int test; cin >> test;
		int n; cin >> n;
		int M[10000];
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> M[i];
			sum += M[i];
		}
		ll x = 0;
		int z = 0;
		ll res;
		for (int i = 0; i < n; i++) {
			x += M[i];
			if (sum % x == 0) {
				ll y = 0; z = 1;
				for (int j = i + 1; j < n; j++) {
					if (y < x) {
						y += M[j];
					}
					if (y == x) {
						z++;
						y = 0;
					}
					if(y>x) {
						y = 0;
						break;
					}
					
				}
				if (sum / x == z) {
					res = x;
					break;
				}
			}
		}
		cout << test << " " << res << endl;
	}
}
