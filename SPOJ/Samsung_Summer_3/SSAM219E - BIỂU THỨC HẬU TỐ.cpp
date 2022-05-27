#include <bits/stdc++.h>
using namespace std;

int prior(char x){
	if(x == '(') return 0;
	if(x == '+' || x == '-') return 1;
	if(x == '*' || x == '/') return 2;
	return 3; 
}

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack <char> st;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') st.push(s[i]);
			else if(isdigit(s[i]) || isalpha(s[i])) cout << s[i];
			else if(s[i] == ')'){
				while(st.top() != '('){
					cout << st.top();
					st.pop();
				}
				st.pop();
				//if(st.top() == '(') st.pop();
			}
			else{
				while(!st.empty() && prior(s[i]) <= prior(st.top())){
					char c = st.top(); st.pop();
					cout << c;
				}
				st.push(s[i]);
			}
		} 
		while(!st.empty()){
			if(st.top() != '(')cout << st.top();
			st.pop();
		}
		cout << endl;
	}
}
