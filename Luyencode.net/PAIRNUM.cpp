#include <bits/stdc++.h>
using namespace std;
bool Binary_Search(int a[], int l, int r, int x) {
  	if (r >= l) {
    	int m = l + (r - l) / 2; 
    	if (a[m] == x)
    		return true;
    	if (a[m] > x)
      		return Binary_Search(a, l, m - 1, x);
    	return Binary_Search(a, m + 1, r, x);
  	}
  	return false;
}
int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	int cnt = 0;
	for(int i = 0; i < n; i ++) cin >> a[i];
	sort(a, a + n);
	for(int i = 0; i < n; i ++){
		if(Binary_Search(a, 0, n - 1, k + a[i]))
			cnt ++;
	}
	cout << cnt << endl;
	return 0;
}