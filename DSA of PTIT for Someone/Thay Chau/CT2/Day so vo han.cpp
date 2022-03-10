#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
struct matrix{
	ll x[4][4];
} a, b;
const int n = 2;
ll k;
matrix operator * (matrix a, matrix b){
	matrix c;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < n; j ++){
			c.x[i][j] = 0;
			for(int k = 0; k < n; k ++){
				c.x[i][j] = (c.x[i][j] + (a.x[i][k] * b.x[k][j]) % mod) % mod;
				c.x[i][j] %= mod;
			}
		}
	}
	return c;
}
matrix Power(matrix a, ll k){
	if(k == 1)
		return a;
	matrix t = Power(a, k / 2);
	if(k & 1) 
		return t * t * a;
	return t * t;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> k;
		matrix a;
		a.x[0][0] = 1; a.x[0][1] = 1; a.x[1][0] = 1; a.x[1][1] = 0; 
		if(k == 0) cout << 0;
		else if(k == 1 || k == 2) cout << 1;
		else{
			a = Power(a, k);
			cout << a.x[0][1];
		}
		cout << endl;
	}
	return 0;
}
