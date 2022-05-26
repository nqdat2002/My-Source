#include <iostream>
using namespace std;

int main () {
	int a[1003];
	a[1] = 1;
	a[2] = 2;
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i) {
		int n; cin >> n;
		for (int j = 3; j <= n; j++) {
			int S = 1;
			for (int k = 1; k <= j / 2; k++)
				S += a[k];
			a[j] = S;
		}
		cout << i << " " << a[n] << endl;
	}
	return 0;
}
