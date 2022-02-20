#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    long long n, tribo[110];
	tribo[0] = 0;
	tribo[1] = 0;
	tribo[2] = 1;
	for (int i=3; i<=109; ++i) {
		tribo[i] = tribo[i-1] + tribo[i-2] + tribo[i-3];
	}
	while (cin >> n){
		for (int i=0; i<=109; ++i) {
			if (tribo[i]>=n) {
				cout << tribo[i] << '\n';
				break;
			}
		}
	}
    return 0;
}
