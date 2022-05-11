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
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		int dem = 0;
		for(int i = a[0]; i <= a[n - 1]; i ++){
			if(!Binary_Search(a, 0, n - 1, i))
				dem++;
		}
		cout << dem << endl;
	}
}
