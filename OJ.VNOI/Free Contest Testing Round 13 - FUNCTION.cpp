#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
void Solve(){
	ll n, x; cin >> n;
	if(n % 2 == 0)
		cout << n / 2;
	else 
		cout << (n - 1) / 2 - n;
}
int main(){
	Solve();
}
