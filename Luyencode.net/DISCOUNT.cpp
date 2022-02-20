#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n, sum=0, a[100000];
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> a[i];
        sum+=a[i];
	}
	sort(a,a+n,greater<int>());
	int temp=n/3;
	for (int i=0; i<temp; ++i) {
		sum-=a[i];
	}
	cout << sum;
	return 0; 
}
