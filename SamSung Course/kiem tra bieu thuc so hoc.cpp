#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str;
		getline(cin, str);
		bool mr;
		stack<char> stk;
		for(int i = 0; i < str.length(); i ++){
			if(str[i] == ')'){
				mr = true;
				char top = stk.top();
				stk.pop();
				while(top != '('){
					if(top == '+' || top == '-' ||top == '*' ||top == '/')
						mr = false;
					top = stk.top(); stk.pop();
				}
				if(mr) break;
			}
			else stk.push(str[i]);
		}
		if(mr) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}