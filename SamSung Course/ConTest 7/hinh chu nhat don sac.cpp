#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll Solve(vector<ll> arr, int n){
	stack<ll> stk;
	ll res = LLONG_MIN;
	ll k = 0;
	while(k < n){
		if(stk.empty() || arr[k] >= arr[stk.top()]){
			stk.push(k);
			k ++;
		}
		else{
			ll index = stk.top();
			stk.pop();
			if(stk.empty())
				res = max(res, k * arr[index]);
			else
				res = max(res, arr[index] * (k - stk.top() - 1));
		}
	}
	while(!stk.empty()){
		ll index = stk.top();
		stk.pop();
		if(stk.empty())
			res = max(res, k * arr[index]);
		else
			res = max(res, arr[index] * (k - stk.top() - 1));
	}
	return res;
}
int main(){
	ll n, m; cin >> m >> n;
	vector<ll> a(n), b(n);
	for(ll i = 0; i < n; i ++) cin >> a[i];
	for(ll i = 0; i < n; i ++) b[i] = m - a[n - i - 1];
	reverse(b.begin(), b.end());
	ll ans = max(Solve(a, n), Solve(b, n));
	cout << ans << endl;
	return 0;
}

