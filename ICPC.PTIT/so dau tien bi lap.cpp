#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, mark = 0; cin >> n;
	    long a[100010];
	    for (int i = 0; i < n; i ++) cin >> a[i];
	    for (int i = 0; i < n - 1; ++ i) {
	    	for(int j = i + 1; j < n; ++ j){
	    		if(a[i] == a[j]){
	    			cout << a[i] << endl;
	    			mark = 1;
	    			break;
				}
			}
			if(mark == 1) break;
		}
	    if(!mark) 
			cout << "NO" << endl;
	}
}
