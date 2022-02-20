#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
	int n,a[1005];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	if(a[0]==a[n-1]) cout << a[0] << '\n' << a[0] << '\n' << a[0];
	else
	{
		int x=a[n-1],y,z;
		cout << x << '\n';
		for(int i=n-2;i>=0;i--){
			if(a[i]!=a[n-1]){
				y=a[i];
				break;
			}
		}
		cout << y << '\n';
		for(int i=n-1;i>=0;i--){
			if(a[i]<y){
				cout << a[i];
				break;
			}
		}
	}
	return 0;
}
