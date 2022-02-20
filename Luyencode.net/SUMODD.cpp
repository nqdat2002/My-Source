#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int a, b; cin >> a >> b;
	if(a % 2 == 0) a++;
	if(b % 2 == 0) b--;
	cout << (ll) ((b - a) / 2 + 1) * (a + b) / 2 << endl;
}