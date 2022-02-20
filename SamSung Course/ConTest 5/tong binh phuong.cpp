#include <bits/stdc++.h>
using namespace std;
int f[10005];
int main(){
	int t; cin >> t;
	while(t --){
		int n; cin >> n;
		for(int i = 0; i <= 3; i ++) f[i] = i;
		for(int i = 4; i <= n; i ++){
			f[i] = i;
			for(int j = 1; j <= sqrt(i); j ++)
				f[i] = min(f[i], f[i - j * j] + 1); 
		}
		cout << f[n] << endl; 
	} 
	return 0;
}