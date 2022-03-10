#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll Power(int n, ll k){
	if(k == 0) 
		return 1;
	if(k % 2 == 0) 
		return Power(n, k / 2) * Power(n, k / 2);
	return n * Power(n, k / 2) * Power(n, k / 2);
} 
ll Solve(int n, ll k){
	if(k == Power(2, n - 1))
		return n;
	if(k < Power(2, n - 1)) 
		return Solve(n - 1, k);
	return Solve(n - 1, k - Power(2, n - 1));
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n; ll k;
		cin >> n >> k; 
		cout << Solve(n, k) << endl; 
	} 
	return 0;
}
