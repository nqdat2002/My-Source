#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int oo = 1e6 + 7;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; 
		vector<int> cnt(oo, 0), r(n, -1);
		for(auto &x: a){
			cin >> x; cnt[x]++;
		}
		stack<int> st;
		for(int i = 0; i < n; ++i){
			while(!st.empty() && cnt[a[i]] > cnt[a[st.top()]]){
				r[st.top()] = a[i];
				st.pop();
			}
			st.push(i);
		}
		for(auto x: r) cout << x << " ";
		cout << endl;
	} 
	return 0;
}
