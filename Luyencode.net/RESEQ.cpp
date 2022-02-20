#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define ll long long
#define N 1000010
const ll mod = 1e9 + 7;
ll n,l,r,f[N][3];
ll a,b,c;
void khoiphuc(){
	int x,y;
	for (y = r; y % 3 != 0; y--);
		for (x = l; x % 3 != 0; x++);
			a = (y-x) / 3 + 1;
	for (y = r; y % 3 != 1; y--);
		for (x = l; x % 3 != 1; x++);
			b = (y-x) / 3 + 1;
	for (y = r; y % 3 != 2; y--);
		for (x = l; x % 3 != 2; x++);
			c = (y-x) / 3 + 1;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> l >> r;
	khoiphuc();
	f[1][0] = a;
	f[1][1] = b;
	f[1][2] = c;
	for (int i = 2; i <= n; i++){
		f[i][0] = (f[i-1][0] * a % mod + f[i-1][1] * c % mod + f[i-1][2] *b% mod) % mod;
		f[i][1] = (f[i-1][0] * b % mod + f[i-1][1] * a % mod + f[i-1][2] *c% mod) % mod;
		f[i][2] = (f[i-1][0] * c % mod + f[i-1][1] * b % mod + f[i-1][2] *a% mod) % mod;
	}
	cout<<f[n][0]%mod;
	return 0;
}
