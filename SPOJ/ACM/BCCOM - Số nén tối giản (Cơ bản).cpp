#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	while(t--){
		ll res = 0;
		string s; cin >> s;
		while(s.size() > 1){
			res = 0;
			for (auto x: s) res += (x - 48);
			s = to_string(res);
		}
		cout << s << endl;
	}
    return 0;
}
