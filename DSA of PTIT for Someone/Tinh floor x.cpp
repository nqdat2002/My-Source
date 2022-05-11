#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	ll x; cin >> x;
    	vector<ll> a(n);
    	bool ok = false;
    	for(auto &y: a) cin >> y;
    	sort(a.begin(), a.end());
    	auto id = lower_bound(a.begin(), a.end(), x) - a.begin();
    	if(id != 0){
	    	if(a[id] == x){
	    		cout << id + 1;
	    		ok = true;
			}
			else if(a[id] > x){
				cout << id;
				ok = true;
			}
		}
		if(!ok) cout << -1;
		cout << endl;
	}
	return 0;
}
