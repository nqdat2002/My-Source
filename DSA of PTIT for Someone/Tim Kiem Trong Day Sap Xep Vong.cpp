#include <bits/stdc++.h>
using namespace std;
bool Binary_Search(int a[], int l, int r, int x){
	while(l <= r){
		int m = (l + r) /2;
		if(a[m] == x)
			return true;
		else if(a[m] > x) r = m - 1;
		else l = m + 1;
	}
	return false;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = 0; i < n; i ++){
			if(a[i] == x){
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}
