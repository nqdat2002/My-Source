#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int arr[n+5];
		int Is_correct[10000+5] = {0};
		long long cnt = 0;
		for(int i = 0 ; i < n ; i ++) {
			cin >> arr[i];
			Is_correct[arr[i]] = 1;
		}
		stable_sort(arr, arr+n);
		for(int i = 0 ; i < n-1 ; i ++) {
			int tmp = arr[i] + x;
			int tmp2 = lower_bound(arr, arr + n, tmp) - arr ;
			int c = tmp2 - i - 1;
			if(c >= 1 ) {
				cnt += c;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
