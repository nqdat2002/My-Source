#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
    	long long n; cin >> n;
        queue<long long> q;
        stack<long long> stk; 
		q.push(6);
		q.push(8);
		stk.push(6);
		stk.push(8);
		for(int i = 2; i <= n; i ++){
			for(int j = 1; j <= pow(2, i - 1); j ++){
				long long tmp = q.front();
				q.pop();
				q.push(tmp * 10 + 6);
				q.push(tmp * 10 + 8);
				stk.push(tmp * 10 + 6);
				stk.push(tmp * 10 + 8); 
			} 
		}
		while(!stk.empty()){
			cout << stk.top() << " ";
			stk.pop(); 
		} 
		cout << endl; 
    }
    return 0;
}