#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[10001];
		for(int i = 0; i <= 3; i ++) a[i] = i;
		for(int i = 4; i <= n; i ++){
			a[i] = i;
			for(int j = 1; j <= sqrt(i); j++){
				a[i] = min(a[i], a[i - j * j] + 1); 
			} 
		}
		cout << a[n] << endl; 
	}
}
