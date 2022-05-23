#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		priority_queue<ll, vector<ll>, greater<ll> > q;
		for(int i = 0; i < n; ++i){
			ll x; cin >> x;
			q.push(x);
		}
		ll res = 0;
		while(q.size() >= 2){
			ll x = q.top();
			q.pop();
			ll y = q.top();
			q.pop();
			q.push(x + y);
			res += (x + y);
		}
		cout << res << endl;
	}
	return 0;
}
