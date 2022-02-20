#include<bits/stdc++.h>
using namespace std;
int Balanced_Point(vector<int> arr, int n, int sum) {
	int S = 0;
	for (int i = 0 ; i < n ; i ++) {
		S += arr[i];
		if (S == sum - S + arr[i])
			return i + 1;
	}
	return -1;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		int sum = 0;
		vector< int > arr(100005);
		for (int i = 0 ; i < n ; i++) {
			cin >> arr[i]; 
		}
		for (int i = 0 ; i < n ; i++) {
			sum += arr[i];
		}
		cout << Balanced_Point(arr, n, sum);
		cout << endl;
	}
}

