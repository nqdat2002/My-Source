#include <bits/stdc++.h>
using namespace std;
int n, k, a[101], f[101][25005]; 
int main(){
	cin >> k >> n;
	for(int i = 1; i <= n; i ++) cin >> a[i]; 
	memset(f, 0, sizeof(f)); 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= k; j++){
			if(j >= a[i] && f[i - 1][j - a[i]] + a[i] > f[i - 1][j]) 
				f[i][j] = f[i - 1][j - a[i]] + a[i];
			else 
				f[i][j] = f[i - 1][j]; 
		} 
	} 
	cout << f[n][k] << endl;
}
