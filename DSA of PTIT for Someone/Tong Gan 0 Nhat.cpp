#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		int mx = -1e6;
		for(int i = 0; i < n - 1; i ++){
			for(int j = i + 1; j < n; j ++){
				if(abs(mx) > abs(a[i] + a[j]))
					mx = a[i] + a[j];
			}
		}
		cout << mx << endl;
	}
}
