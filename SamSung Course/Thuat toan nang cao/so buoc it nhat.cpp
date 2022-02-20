#include <bits/stdc++.h>
using namespace std;
int Solve(vector<int> arr, int n) {
	vector<int> fre(n, 0); 
	int cnt = 0;
	for (int i = 0; i < n; i++){
		fre[i] = 1;
		for (int j = 0; j < i; j++){
			if (arr[i] >= arr[j])
				fre[i] = max(fre[i], fre[j] + 1);
		}
		cnt = max(cnt, fre[i]);
	}
	return cnt;
}
int main() {
	int t; 
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0; i < n; i ++){
			cin >> arr[i];
		}
		cout << n - Solve(arr, n) << endl;
	}
	return 0;
}
