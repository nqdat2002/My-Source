#include <bits/stdc++.h>
using nambespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> M(n);
		for (int i = 0; i < n; i++)cin >> M[i];
		int max = M[0],min=M[n-1];
		bool N[100000], A[100000];
		int a = 0, b = 0;
		for (int i = 1; i < n; i++) {
			if (M[i] >= M[0]) a++;
			if (M[i] > max) {
				max = M[i];
				N[i] = true;
			}
			else N[i] = false;
		}
		for (int i = n - 2; i >= 0; i--) {
			if (M[i] < M[n - 1])b++;
			if (M[i] <= min) {
				min = M[i];
				A[i] = true;
			}
			else A[i] = false;
		}
		int count = 0;
		for (int i = 1; i < n-1; i++) {
			if (N[i] && A[i])count++;
		}
		if (a == n - 1)count++;
		if (b == n - 1)count++;
		
		cout << count << endl;
	}
	return 0;
}