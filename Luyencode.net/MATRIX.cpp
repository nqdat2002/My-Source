#include <bits/stdc++.h>
#define ll long long
using namespace std;
int major[402][402], minor[402][402] = {0};
int main(){
		int n;
		cin >> n;
		int a[n + 1][n + 1];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++) 
				cin >> a[i][j];
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(i == 1 || j == 1)
					major[i][j] = a[i][j];
				else
					major[i][j] = a[i][j] + major[i - 1][j - 1];
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = n; j >= 1; j--){
				if(i == 1 || j == n)
					minor[i][j] = a[i][j];
				else
					minor[i][j] = minor[i - 1][j + 1] + a[i][j];
			}
		}
		ll res = -1e18;
		for(int i = n; i >= 1; i--){
			for(int j = n; j >= 1; j--){
				int tmp = min(j, i);
				int hang = i - tmp, cot = j - tmp;
				for(int k = 0; k < min(i, j); k++){
					res = max(res, 0ll + major[i][j] - major[hang + k][cot + k] - (minor[i][cot + k + 1] - minor[hang + k][j + 1]));
				}
			}
		}
		cout << res << endl;
	return 0;
}