#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
int a, b, c, d;
int main(){
	freopen("test3.inp", "r", stdin);
	freopen("test3.out", "w", stdout);
	cin >> a >> b >> c >> d;
	int x = abs(a - c);
	int y = abs(b - d);
	if(x == y) cout << x;
	else {
		int m = min(x, y);
		cout << m + abs(x - y);
	}
	return 0;
}
