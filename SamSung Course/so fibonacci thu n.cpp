#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long n;
long long F[2][2],M[2][2];
void Mul(long long f[2][2],long long m[2][2]){
	long long x=(f[0][0]*m[0][0]%mod+f[0][1]*m[1][0]%mod)%mod;
	long long y=(f[0][0]*m[0][1]%mod+f[0][1]*m[1][1]%mod)%mod;
	long long z=(f[1][0]*m[0][0]%mod+f[1][1]*m[1][0]%mod)%mod;
	long long t=(f[1][0]*m[0][1]%mod+f[1][1]*m[1][1]%mod)%mod;
	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=t;
}
void POW(long long f[2][2],long long n){
	if(n<=1) return;
	POW(f,n/2);
	Mul(f,f);
	if(n&1) Mul(f,M);
}
void Solve(){
	F[0][0]=F[1][0]=F[0][1]=1;
	F[1][1]=0;
	M[0][0]=M[0][1]=M[1][0]=1;
	M[1][1]=0;
	cin >> n;
	if(n==0) cout << 0;
	else if (n == 1 || n == 2) cout << 1 << endl;
	else{
		POW(F, n - 1);
		cout << F[0][0] << endl;
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	int t; cin >> t;
	while(t--){				
		Solve();
	}
	return 0;
}
