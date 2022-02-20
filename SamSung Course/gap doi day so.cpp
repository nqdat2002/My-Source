#include <bits/stdc++.h>
using namespace std;
long long power(int n, int k){
	if(k == 0) return 1;
	if(k == 1) return n;
	if(k % 2 == 0) return power(n, k / 2) * power(n, k / 2);
	if(k % 2 == 1) return n * power(n, k / 2) * power(n, k / 2);
} 
int find(int n, long long k){
	if(k == power(2, n - 1))return n;
	if(k < power(2, n - 1)) return find(n - 1, k);
	else{
		k = k - power(2, n - 1);
		return find(n - 1, k); 
	} 
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n; long long k;
		cin >> n >> k; 
		cout << find(n, k) << endl; 
	} 
	return 0;
}
