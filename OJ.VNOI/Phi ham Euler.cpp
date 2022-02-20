#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
typedef long long ll;
ll phi(ll n){
	ll res = n;
	for(ll i = 2; i <= sqrt(n); i ++){
		if(n % i == 0){
			while(n % i == 0) 
				n /= i;
			res -= res / i;
		}
	}
	if(n != 1) res -= res / n;
	return res;
}
int main(){
	run1
	while(t--){
	   ll n;
	   cin >> n;
	   cout << phi(n) << endl;
	}
	return 0;
}

