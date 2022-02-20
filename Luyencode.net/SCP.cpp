#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		ll a = 1;
		ll b; cin >> b;
		ll c, d;
		if((ll)sqrt(a) == (long double)(sqrt(a))){
			c = sqrt(b);
			d = sqrt(a);
		}
		else{
			c = sqrt(b);
			d = sqrt(a) + 1;
		}
		cout << c - d + 1 << endl;
	}
	return 0;
}