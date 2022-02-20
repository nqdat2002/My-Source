#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
    	long long n; cin >> n;
        queue<long long> q;
        vector <long long> stk; 
		q.push(6);
		q.push(8);
		stk.push_back(6);
		stk.push_back(8);
		for(int i = 2; i <= n; i ++){
			for(int j = 1; j <= pow(2, i - 1); j ++){
				long long tmp = q.front();
				q.pop();
				q.push(tmp * 10 + 6);
				q.push(tmp * 10 + 8);
				stk.push_back(tmp * 10 + 6);
				stk.push_back(tmp * 10 + 8); 
			} 
		}
		cout << stk.size() << endl;
		reverse(stk.begin(), stk.end());
		for(auto x:stk) cout << x << " ";
		cout << endl; 
    }
    return 0;
}