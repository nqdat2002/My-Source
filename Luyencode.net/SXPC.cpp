#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
	ll n; cin >> n;
	for(ll i = sqrt(n);i >= 1; i --)
		if(n % i == 0){
			cout << i << " " << n / i;
			break;
		}
    return 0;
}