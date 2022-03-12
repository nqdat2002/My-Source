#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(int i = 0; i < n; i ++) cin >> a[i];
    	int res = 1, f[1001];
    	f[0] = 1;
    	for(int i = 0; i < n; i ++){
    		f[i] = 1;
    		for(int j = 0; j < i; j ++){
    			if(a[i] >= a[j])
    				f[i] = max(f[i], f[j] + 1);
    		}
    		res = max(res, f[i]);
    	}
    	cout << n - res << endl;
    }
	return 0;
}
