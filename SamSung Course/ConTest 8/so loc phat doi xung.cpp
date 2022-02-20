#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
        queue<string> q;
        vector<string> v; 
		q.push("6");
		q.push("8");
		for(int i = 1; i <= n; i ++){
			string tmp = q.front();
			string t = q.front();
			reverse(t.begin(), t.end());
			q.pop();
			q.push(tmp + "6");
			q.push(tmp + "8");
			v.push_back(tmp + t);
		}
		for(int i = 0; i < n; i ++)
			cout << v[i] << " ";
		cout << endl; 
    }
    return 0;
}