#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 9;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a[10] = {500,200, 100, 50, 20, 10, 5, 2, 1};
    int t; cin >> t;
    while(t--){
    	ll k, res = 0;
		cin >> k;
       	for(int i = 0; i < mx; i ++){
       		res += k / a[i];
       		k %= a[i];
       	}
   		cout << res << endl;       
    }  
	return 0; 
}
