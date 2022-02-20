#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
#define ll long long
string n,m;
ll k;
ll process(){
	ll ans = 0;
	for (int i = 0; i < n.size(); i++){
		ans = (ans*10 + n[i] - '0') % k;
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> n >> m >> k;
	ll a = process(), ans = 1, tmp = a;
	int carry = 1;
	for (int i = m.size()-1; i >= 0; i--){
		int num = (m[i] - '0') - carry;
		if (num < 0) num = 9;
			else carry = 0;
		for (int j = 0; j < num; j++) ans = ans * tmp % k;
		ll temp = 1;
		for (int j = 0; j < 10; j++) temp = temp * tmp % k;
		tmp = temp;
	}
	cout << ans;
	return 0;
}
