#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
const long long mod=1e9+7;
using namespace std;
int n;
unsigned long long k,a[200][200],b[200][200];
void Mul(unsigned long long x[200][200],unsigned long long y[200][200]){
	unsigned long long tmp[200][200];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			unsigned long long res=0;
			for(int k=0;k<n;k++){
				res += (x[i][k]*y[k][j])%mod;
				res %= mod;
			}
			tmp[i][j]=res;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=tmp[i][j];
		}
	}
}
void Pow(unsigned long long a[200][200],long long n){
	if(n<=1) return;
	Pow(a,n/2);
	Mul(a,a);
	if(n&1) Mul(a,b);
}
void Solve(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}
	Pow(a,k);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==n-1)
			cout << a[i][j];
			else cout<<a[i][j]<<' ';
		}
		cout << '\n';
	}
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	Solve();
	return 0;
}
