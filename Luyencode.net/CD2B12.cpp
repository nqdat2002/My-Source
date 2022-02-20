#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) a.begin(),a.end()
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
typedef long long ll;
const ll mod = 1e9 + 7;
// Author: Nguyen Quoc Dat
// Code: B20DCPT053
// Organization: PTIT
// Date:
// Program:
// -------------------  Your code STARTS here !!!---------------------------

ll Solve(ll n){
	ll res = 0;
	ll k = 1;
	if(n == 0) return 0;
	while(pow(5, k) <= n){
		res += n / pow(5, k);
		k += 1;
	}
	return res;
}
int main(){
	int t = 1;
	while(t--){
		ll n; cin >> n;
		cout << Solve(n) << endl;
	}
	return 0;
}

