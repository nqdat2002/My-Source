#include <bits/stdc++.h>

#define endl "\n"
using namespace std;

int n, S;
int arr[26][4];
int dem;
int output = 0;

long long backtrack_CalfTest(int S, int result, int start) {
	for (int i = start; i <= dem; ++i) {
		if (arr[i][1] <= S) {
			backtrack_CalfTest(S - arr[i][1], result + arr[i][2], i + 1);
		}
	}
	output = max(output, result);
	return output;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin >> n >> S;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i][0];
		if (arr[i][0] <= S) {
			arr[++dem][1] = arr[i][0];
		}
	}
	dem = 0;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i][2];
		if (arr[i][0] <= S) {
			arr[++dem][2] = arr[i][2];
		}
	}
	cout << backtrack_CalfTest(S, 0, 1) << endl;
	return 0;
}