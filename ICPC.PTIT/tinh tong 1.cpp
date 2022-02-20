#include <bits/stdc++.h> 
using namespace std; 
const long long p = 1e9 + 7;
long long n,k;
long long Mul(long long a,long long b){
	if(b==0) return 0ll;
	long long tmp = Mul(a,b/2);
	if(b&1) 
		return (tmp*2+a)%p;
	return tmp*2%p;
}
long long PoW(long long n,long long k){
	if(k==0) return 1;
	if(k==1) return n%p;
	long long tmp = PoW(n,k/2);
	long long a = Mul(tmp,tmp);
	if(k&1) return a*n%p;
	return a%p;
}
void Solve()  {
	cin >> n >> k;
	long long res = PoW(n, k);
	res = (res * (n + 1) / (k + 1));
	cout << res << endl;
}

int main(){ 
	int t; 
	cin >> t; 
	while (t --) { 
		Solve();
	} 
	return 0; 
}
