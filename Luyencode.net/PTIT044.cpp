#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
ll power(ll a,ll n){
    if(n==0) return 1;
    ll tmp=power(a,n/2)%M;
    if(n%2==0) return (tmp*tmp)%M;
    else return ((a%M)*((tmp*tmp)%M))%M;
}
int main(){
    ll n; cin>>n;
    ll ans=((5*power(3,n))%M-(6*power(2,n))%M)%M;
    cout<<ans;
}
