#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll arr[n]; for(ll i = 0; i < n; i ++) cin >> arr[i];
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
		cout << res << endl;
	}
	return 0;
}

