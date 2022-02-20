#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[10001];
		a[0] = 0; a[1] = 1;
		a[2] = 2;
		a[3] = 3;
		for(int i = 4; i <= n; i ++){
			a[i] = i;
			for(int j = 1; j <= sqrt(i) ; j++)
				a[i] = min(a[i], a[i - j * j] + 1); 	 
		}
		cout << a[n] << endl; 
	} 
	return 0;
}
