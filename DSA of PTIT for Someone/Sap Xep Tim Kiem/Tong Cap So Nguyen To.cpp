#include <bits/stdc++.h>
using namespace std;
bool snt(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i ++)
		if(n % i == 0) 
			return false;
	return true;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		bool ok = false;
		for(int i = 2; i <= n / 2; i++){
			if(snt(i) && snt(n - i)){
				cout << i << " " << n - i << endl;
				ok = true;
				break;
			}
		}
		if(!ok) cout << -1 << endl;
	}
	return 0;
}
