#include <bits/stdc++.h>
using namespace std;
#define ll long long 
ll M= 1000000007;
ll pow(ll a, ll n){
    if(n == 1) {
        return a;
    } else {
        ll temp = (ll)pow(a, n/2);
        if(n % 2 == 0)
            return (temp%M * temp%M)%M;
        else
            return ((temp%M * temp%M)%M%M *a%M) %M;
    }
}
int main(){
	ll a,b;
	scanf("%lld", &a);
	printf("%lld", pow((ll)7,a-1));

}
