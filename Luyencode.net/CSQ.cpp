#include <bits/stdc++.h>
const int mod = 1000000007;
using namespace std;
int main(){
	long long n;
	cin >> n;
	if(n*(n+1)%6==0) 
		cout <<(n*(n+1)/6%mod)*((2*n+1)%mod)%mod;
	else if((n+1)*(2*n+1)%6==0) 
		cout <<(n%mod)*((n+1)*(2*n+1)/6%mod)%mod;
	else if(n*(2*n+1)%6==0) 
		cout <<(n+1)%mod*(n*(2*n+1)/6%mod)%mod;
	return 0;
}
