#include <bits/stdc++.h>  
using namespace std;
typedef long long ll;
ll r(ll n){
	return round(sqrt(n));
}
int main(){
    ll n;cin>>n;
    if (n <= 2) {
      cout<<"NO";
      return 0;	
    }
    if (r(n) * r(n)==n) {
      cout<<"YES";
      return 0;
    }
    for (ll i= r(2 * n) - 1;i <= r(2 * n) +1; i++) 
      if (i * (i + 1) == 2 * n) {
        cout<<"YES";
        return 0;	 
    }
    cout<<"NO";
	 return  0;
}