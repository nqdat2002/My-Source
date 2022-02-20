#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7;
int main(){
	ll s1, s2, s3; cin >> s1 >> s2 >> s3;
	ll q = s1, k = s3;
	ll y = __gcd(s1, s2);
	s1 /= y;
	s2 /= y;
	s3 /= s2;
	ll u = ceil(pow(s1 * s3, 0.5));
	ll a = q / u;
	ll b = k / u;
	cout << ((a + b + u) * 4) % mod << endl;
	return 0;
}