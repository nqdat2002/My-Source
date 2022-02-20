#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    int K; cin >> K;
    ll res = 0;
    for(ll i = 1; i <= K; i ++){
    	for(ll j = 1; j <= K / i; j++){
    		res += K / (i*j);
    	}
    }
    cout << res << endl;
    return 0;
}