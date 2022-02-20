#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int t; 
	cin >> t;
	while (t--) {
		int n; 
		cin >> n;
		vector<long long int> arr(n), a(n + 1,INT_MIN);
        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        for (int i = n - 1; i >= 0; i--)
			a[i] = max(a[i + 1], arr[i]);
			
		int res = 0;
        for (int i = 0; i < n; i++) {
            int low = i + 1, high = n - 1, ans = i;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (arr[i] < a[mid]) {
                    ans = max(ans, mid);
                    low = mid + 1;
                }
                else
                    high = mid - 1;
            }
            res = max(res, ans - i);
        }
        if (res != 0)
	   		cout << res << endl;
	   	else cout << "-1" << endl;
	}
	return 0;
}
