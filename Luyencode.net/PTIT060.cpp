#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	long n,k,z;
	cin >> n >> k;
	long a[n+1];
	for(int i=1;i<=n;i++) 
		cin >> a[i];
	z=k%n;
	for(int i=1;i<=n;i++){
		if(z<n-z){
			if(i+z<=n) cout << a[i+z]<<' ';
			else cout << a[i+z-n]<<' ';
		}
		if(z>n-z){
			if(i-(n-z)>=1) cout << a[i-(n-z)] <<' ';
			else cout << a[i-(n-z)+n]<<' ';
		}
	}
	return 0;
}
