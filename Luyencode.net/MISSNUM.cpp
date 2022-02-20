#include <iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n; cin >> n;
    ll s = (n+1)*(n+2)/2;
    for(ll i = 0; i < n; i ++){
        ll x; cin >> x;
        s = s - x;
    }
    cout << s << endl;
	return 0;
}