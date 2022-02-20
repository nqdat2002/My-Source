#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, a[100000];
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	int dem=n/2, temp=dem;
	for (int i=temp; i<n; ++i) {
		if (a[i]==a[dem-1]) {
			++dem;
		}
	}
	cout << dem;
	return 0;
}
