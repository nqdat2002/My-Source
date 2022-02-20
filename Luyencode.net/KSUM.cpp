#include <bits/stdc++.h>
using namespace std;
const int = nmax 100005;
int a[nmax];
int n, k;
int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
		cin >> a[i];
    long long s = 0;
    for (int i = 1; i <= k; i++)
		s += a[i];
    long long res = s;
    for (int i = 2; i <= n - k + 1; i++) {
    	
        s += a[i + k - 1] - a[i - 1];
        res = max(res, s);
    }
    cout << res;
    return 0;
}
