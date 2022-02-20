#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e15 + 7;
struct matrix{
	ll a[4][4];
} a, b;
int test, n;
ll f[5], t[5];
ll multi(ll a, ll b){
	ll c = 0;
	while(b > 0){
		if(b & 1){
			c += a;
			if(c > mod) c -= mod;
		}
		a += a;
		if(a >= mod) a -= mod;
		b /= 2;
	}
	return c;
}
matrix operator * (matrix a, matrix b){
	matrix c;
	for(int i = 0; i < 4; i ++){
		for(int j = 0; j < 4; j ++){
			c.a[i][j] = 0;
			for(int k = 0; k < 4; k ++){
				c.a[i][j] = (c.a[i][j] + multi(a.a[i][k], b.a[k][j])) % mod;
			}
		}
	}
	return c;
}
matrix Power(int p){
	if(p == 1) return a;
	matrix x = Power(p / 2);
	x = x * x;
	if(p & 1) x = x * a;
	return x;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	cin >> test;
	while(test--){				
		a.a[0][0] = a.a[0][1] = a.a[1][1] = a.a[1][2] = a.a[2][1] = a.a[1][3] = a.a[3][2] = 1;
		f[1] = 1; t[1] = 1;
		f[2] = 3; t[2] = 2;
		f[3] = 6; t[3] = 3;
		cin >> n;
		if(n <= 3) cout << f[n] << endl;
		else{
			b = Power(n - 2);
			cout << (f[2] * b.a[0][0] + t[3] * b.a[0][1] + t[2] * b.a[0][2] + t[1] * b.a[0][3]) % mod << endl;
		}
	}
	return 0;
}
