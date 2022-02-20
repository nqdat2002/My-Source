#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
    	int n; cin >> n;
        queue<string> q;
        vector<string> v; 
		q.push("0");
		q.push("1");
		for(int i = 1; i <= 90000; i ++){
			string tmp = q.front();
			string t = q.front();
			reverse(t.begin(), t.end());
			q.pop();
			q.push(tmp + "0");
			q.push(tmp + "1");
			v.push_back(tmp + t);
		}
		for(int i = 0; i <= 90000; i ++){
			if(v[i].size() <= n)
				cout << v[i] << " ";
			else 
				break;
		}
		cout << endl;
    }
    return 0;
}