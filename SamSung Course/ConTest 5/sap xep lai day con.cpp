#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i ++){
			cin >> a[i];
			b[i] = a[i];
		}
		int l = 0, r = 0;
		sort(a, a + n);
		
		for(int i = 0; i < n; i ++)
			if(a[i] != b[i]){
				l = i;
				break;
			}

		for(int i = n - 1; i >= 0; i --)
			if(a[i] != b[i]){
				r = i;
				break;
			}
		cout << l + 1 << " " << r + 1 << endl;	
	}
	return 0;
}
