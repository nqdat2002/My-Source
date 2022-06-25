#include<bits/stdc++.h>
using namespace std;
int main() {
	freopen("3.inp", "r", stdin);
	freopen("3.out", "w", stdout);
    int t; cin >> t;
    cin.ignore(); 
    while(t--) {
        string s;
        getline(cin, s);
        stack<string> stk;
        stringstream ss(s);
        string tmp;
        while(ss >> tmp) {
        	reverse(tmp.begin(), tmp.end());
            stk.push(tmp);
        }
        while(stk.size()) {
            cout<< stk.top() << " ";
            stk.pop();
        }
        cout<<endl;
    }
}
