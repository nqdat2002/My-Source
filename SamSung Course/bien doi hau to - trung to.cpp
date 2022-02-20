#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		string str; cin >> str;
		stack<string> stk;
		int n = str.length();
		for(int i = n - 1; i >= 0; i --){
			if(str[i] == '+' ||str[i] == '-' ||str[i] == '*' ||str[i] == '/' || str[i] == '^' || str[i] == '%'){
				string s1 = stk.top();
				stk.pop();
				string s2 = stk.top();
				stk.pop();
				string tmp = "(" + s2 + str[i] + s1 + ")";
				stk.push(tmp);
			}
			else stk.push(string(1, str[i]));
		}
		cout << stk.top() << endl;
	}
	return 0;
}