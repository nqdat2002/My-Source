#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string str;
		while (n >= 10) {
			int x = n % 10;
				n /= 10;
				if (x < 5) str = to_string(0) + str;
				else {
					str += to_string(0);
					n++;
				}
		}
		str += to_string(n);
		cout << s << endl;
	}
	return 0;
}
