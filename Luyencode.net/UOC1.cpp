#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum = 0;
int main() {
ios_base::sync_with_stdio (0);
cin.tie (0);
cout.tie (0);
int a, b;
cin >> a >> b;

for (int i = 1; i <= sqrt (a); i++) {
	if (a % i == 0 && b % i != 0) {
		if (a / i == i) {
			sum += i;
		} else if (a / i != i && b % (a / i) != 0) {
			sum += i + a / i;
		} else if (a / i != i && b % (a / i) == 0) {
			sum += i;
		}
	}

	if (a % i == 0 && b % i == 0) {
		if (b % (a / i) != 0) {
			sum += a / i;
		}
	}
}

cout << sum;
return 0;
}
