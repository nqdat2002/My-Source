#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
	    long a[n + 5];
	    for (int i = 0; i < n; i ++) cin >> a[i];
	    bool ok = false;
	    for (int i = 0; i < n - 1; i ++) {
	    	for(int j = i + 1; j < n; j ++){
	    		if(a[i] == a[j]){
	    			cout << a[i] << endl;
	    			ok = true;
	    			break;
				}
			}
			if(ok) break;
		}
	    if(!ok) 
			cout << "NO" << endl;
	}
	return 0;
}
