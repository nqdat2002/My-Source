#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10,M=1e6+5,inf=0x3f3f3f3f,mod=1e9+7;
#define mst(a) memset(a,0,sizeof a)
#define lx x<<1
#define rx x<<1|1
#define reg register
#define PII pair<int,int>
#define fi first 
#define se second
ll fac[N];
ll ksm(ll a,ll n){
	ll ans=1;
	while(n){
		if(n&1) ans=ans * a% mod;
		a = a * a % mod;
		n>>=1; 
	}
	return ans;
}
ll C(ll n,ll m){
	return fac[n] * ksm (fac[m] * fac[n-m] % mod, mod-2) % mod;
}
int main(){
	int h,w,a,b;
	cin >> h >> w >> a >> b;
	fac[0]=1;
	for(int i=1;i<=2e5+5;i++)
		fac[i]=i*fac[i-1]%mod;
	ll ans=0;
	for(int i=b;i<=w-1;i++){
		ans+=C (h-a+i-1,i) * C(a+w-i-2,w-i-1)% mod;
		ans%=mod;
	}
	cout << (ans%mod+mod) % mod;
	return 0;
}

