#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll arr[5] = {1,1,2,6,4};
ll mu2(ll n){
	if(n % 4 == 0) return 6;
	if(n % 4 == 1) return 2;
	if(n % 4 == 2) return 4;
	if(n % 4 == 3) return 8;
}
ll lastnumber(ll n){
	ll res;
	if(n < 2) 
		res = 1;
	else 
		res = (mu2(n / 5) * lastnumber(n / 5) * arr[n % 5]) % 10;
	return res;
}
int main(){
	ll n;
	cin >> n;
	cout << lastnumber(n);
	return 0;
}

