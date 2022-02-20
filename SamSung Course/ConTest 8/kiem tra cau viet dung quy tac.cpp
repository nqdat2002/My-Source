#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
void Solve(string s){
	stack<int> stk;
	int n = s.size();
	for(int i = 0; i < n; i ++){
		if(s[i] == '[' || s[i] == '(') 
			stk.push(s[i]);
		else if(s[i] == ']' || s[i] == ')'){
			if(stk.empty()){
				cout << "NO";
				return;
			}
			int t = stk.top();
			if(t == 91 && s[i] == ']') stk.pop();
			else if(t == 40 && s[i] == ')') stk.pop();
			else{
				cout << "NO";
				return;
			}
		}
	}
	if(stk.empty()) cout << "YES";
	else cout << "NO";
}
int main(){
	FileIO();
	int t; cin >> t; 
	cin.ignore();
	while(t--){
		string str; 
		getline(cin, str);
		Solve(str);
		cout << endl;
	}
	return 0;
}