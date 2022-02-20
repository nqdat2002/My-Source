#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	long m, n, a;
	cin >> n >> m >> a;
	if(m == n && n == a && m == a || (ll) m * n <= a) cout << 1;
	else{
		long x = a , y = a;
		int cnt1 = 0, cnt2 = 0;
		while(x < m){
			x += a;
			cnt1++;
		}
		while(y < n){
			y += a;
			cnt2++;
		}
		cout <<(long long) y * x / (a * a);
	}
	return 0;
}