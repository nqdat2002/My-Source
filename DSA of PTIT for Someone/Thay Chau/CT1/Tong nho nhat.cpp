#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		long long x = 0, y = 0;
		for(int i = 0; i < n; i ++){
			if(i & 1) x = 10 * x + a[i];
			else y = 10 * y + a[i];
		}
		cout << x + y << endl;
	}
    return 0;
}
