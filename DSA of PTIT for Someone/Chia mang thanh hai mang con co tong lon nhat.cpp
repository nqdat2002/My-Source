#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while (t--){
    	int n, k; cin >> n >> k;
        int a[n];
        int sum = 0, tong1 = 0, tong2 = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
        k = min(n - k, k);
        sort(a, a + n);
        for (int i = 0; i < k; ++i) tong1 += a[i];
        tong2 = sum - tong1;
        cout << tong2 - tong1 << endl;
    }
	return 0;
}