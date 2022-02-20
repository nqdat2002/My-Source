#include <bits/stdc++.h>
using namespace std;
bool check(char a){
	if(a == '+'||a == '-' ||a == '*'||a == '/') 
		return true;
	else 
		return false;
}
int main(){
	int t; cin >> t;
	cin.ignore()
	while(t--){
		string str; cin >> str;
		int n = s.length();
		stack<string> stk;
		for(int i = n - 1; i >= 0; i --){
			if(check(str[i])){
				string s1 = t.top();
				stk.pop();
				string s2 = stk.top(); 
				stk.pop();
				string t = s1 + s2 + str[i];
				stk.push(t);
			}
			else 
				stk.push(string(1, str[i]));
		}
		cout << stk.top() << endl;
	}
	return 0;
}