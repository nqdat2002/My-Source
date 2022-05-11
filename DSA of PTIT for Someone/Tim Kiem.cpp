#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int a[n + 5];
		int c = -1;
		for(int i = 0; i < n; i ++) cin >> a[i];
		for(int i = 0; i < n; i ++){
			if(a[i] == x){
				c = 1;
				break;
			}
		}
		cout << c << endl;
	}
	return 0;
}
