#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int Binary_Search(int a[], int b[], int n){
	int t = n; 
	int l = 0, r = n - 1;
	while(l <= r){
		int m = (l + r) / 2 ;
		if(a[m] == b[m]) l = m + 1;
		else{
			t = m;
			r = m - 1; 
		} 
	} 
	return t; 
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n - 1]; 
		for(auto &x: a) cin >> x;
		for(auto &x: b) cin >> x;
		cout << Binary_Search(a, b, n) + 1 << endl; 
	} 
	return 0;
}
