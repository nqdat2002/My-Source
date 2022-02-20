#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int n, m;
long long arr1[21];
int arr2[100001];
bool arr[1000001];
void backtrack_BLSCALES(int count, int result) {
	for (int i = count; i <= n; ++i)
	{			
		result += arr1[i];
		if (result <= 1000000) arr[result] = 1;
		backtrack_BLSCALES(i + 1, result);
		result -= arr1[i];
	}
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
	{
		cin >> arr1[i];
	}
	sort(arr1, arr1 + n + 1);
	for (int i = 1; i <= m; ++i)
	{
		cin >> arr2[i];
	}
	backtrack_BLSCALES(1, 0);
	for (int i = 1; i <= m; ++i)
	{
		cout << arr[arr2[i]];
	}
	cout << endl;
	return 0;
}
