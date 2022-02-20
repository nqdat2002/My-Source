#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if(n == 0 || n % 8 != 0) cout << -1;
        else
            cout << 5 * (n / 8) << " " << 2 * (n / 8) << " " << n / 8;
        cout << endl;
    }
	return 0;    
}