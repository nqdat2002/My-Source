#include <bits/stdc++.h>
#include <algorithm>
const long long mod =1e9+7;
long long n,k;
using namespace std;
long long Mul(long long a,long long b){
	if(b==0) return 0ll;
	long long tmp=Mul(a,b/2);
	if(b&1) return (tmp*2+a)%mod;
	return tmp*2%mod;
}
long long PoW(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n%mod;
	long long tmp=PoW(n,k/2);
	long long a=Mul(tmp,tmp);
	if(k&1) return a*n%mod;
	return a%mod;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin>>n>>k;
	cout<<PoW(n,k);
	return 0;
}