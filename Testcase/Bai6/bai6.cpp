#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	freopen("test2.inp", "r", stdin);
	freopen("test2.out", "w", stdout);
	int n,a[10005];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	if(a[n - 1] - a[0] != 0) cout << a[n - 1] - a[0];
	else cout << -1;
	return 0;
}
