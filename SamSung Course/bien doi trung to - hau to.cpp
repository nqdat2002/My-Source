#include <bits/stdc++.h>
using namespace std;
int getpr(char c){
	if(c == '+' || c == '-') 
		return 1;
	if(c == '*' || c == '/') 
		return 2;
	if(c == '^') 
		return 3;
	return -1;
}
void xuly(string s){
	stack<char> st;
	string res = "";
	int n = s.size();
	for(int i = 0; i < n; i ++){
		if(isalpha(s[i])) 
			res += s[i];
		else if(s[i] == '(') 
			st.push(s[i]);
		else if(s[i] == ')'){
			while(!st.empty() && st.top() != '('){
				char c = st.top(); st.pop();
				res += c;
			}
			if(st.top() == '(') st.pop();
		}
		else{
			while(!st.empty() && getpr(s[i]) <= getpr(st.top())){
				char c = st.top(); st.pop();
				res += c;
			}
			st.push(s[i]);
		}
	}
	while(!st.empty() && st.top() != '('){
				char c = st.top(); st.pop();
				res += c;
	}
	cout << res << endl;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; 
		getline(cin, s);
		xuly(s);
	}
	return 0;
}
