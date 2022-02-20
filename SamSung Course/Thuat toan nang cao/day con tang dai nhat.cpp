#include <iostream>
#include <algorithm>
using namespace std;
#define N 1000010
int a[N],b[N],f[N],n;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int m = 0;
	for (int i = 1; i <= n; i++){
		f[i] = lower_bound(b + 1,b + m + 1, a[i]) - b;
		m = max(m, f[i]);
		b[f[i]] = a[i];
	}
	cout << m;
	return 0;
}
