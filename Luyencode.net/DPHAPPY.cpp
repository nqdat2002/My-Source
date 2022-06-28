#include <iostream>
using namespace std;
int main() {
	int n,a[30000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	long long res = 0,sum[30000];
	sum[n-1] = a[n-1];
	for (int i = n - 2; i  >= 0; i--)
		sum[i] = sum[i + 1] + a[i];
	for (int i = 0; i < n; i++)
		res += a[i] * (sum[i] - a[i]);
	cout << res;
}
