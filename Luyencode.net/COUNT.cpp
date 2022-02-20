#include <bits/stdc++.h>
using namespace std;
int main() {
	int n; 
	cin >> n;
	vector <long long> a(n+1,0);
	for (int i=1;i<=n;i++) {
		cin >> a[i];
		a[i]=a[i]+a[i-1];
	}
	long long res = 0;
	if (a[n]%3==0) {
		vector <int>b(n + 2, 0);
		for(int i=n-1;i>0;i--) {
			b[i]=b[i+1]+(a[n]-a[i]==a[n]/3);
		}
		for(int i=1;i<=n;i++) if(a[i]==a[n]/3) res+=b[i + 1];
	}
	cout<<res;
	return 0;
}
