#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,a[10005],b[10005],j=0;
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	for(int i=1;i<n-1;i++){
		b[j]=a[i];
		j++;
	}
	cout<<a[0]<<' ';
	sort(b,b+j);
	for(int i=0;i<j;i++){
		cout << b[i] << ' ';
	}
	cout << a[n-1];
	return 0;
}