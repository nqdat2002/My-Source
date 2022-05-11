#include <bits/stdc++.h>
using namespace std;
int f[1001][1001];
int a[1001][1001]; 
int dem(int n,int m){
	int res = 0; 
	for(int i = 0; i < n; i++) f[i][0] = a[i][0]; 
	for(int i = 0; i < m; i++) f[0][i] = a[0][i];
	
	for(int i = 1; i < n; i++){
		for(int j = 1; j < m; j++){
			if(a[i][j] == 1)
				f[i][j] = min(min(a[i - 1][j] + 1, f[i][j - 1] + 1), f[i - 1][j - 1] + 1); 
			else f[i][j] = 0; 
			res = max(res, f[i][j]);
		}
	} 
	return res; 
} 
int main(){
	int t; cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m; 
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++) cin >> a[i][j];
		cout << dem(n, m) << endl; 
	} 
}
