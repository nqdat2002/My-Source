#include <bits/stdc++.h>
using namespace std;
int main() {
    long long l, r, i, sum = 0;
    cin >> l >> r;
    if(l % 2 == 0 && r % 2 == 0) {
    	sum = (l + r) * ((r - 1 - l - 1) / 2 + 1) / 2;
	}
	if(l % 2 == 0 && r % 2 != 0) {
		sum = (l + 1 + r) * ((r - l - 1) / 2 + 1) / 2;
	}
	if(l % 2 != 0 && r % 2 == 0) {
		sum = (l + r - 1) * ((r - 1 - l) / 2 + 1) / 2;
	}
	if(l % 2 != 0 && r % 2 != 0) {
		sum = (l + r) * ((r - l) / 2 + 1) / 2;
	}
    cout << sum;
    return 0;
}
