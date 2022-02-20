#include <bits/stdc++.h>
using namespace std;
int Solve(string str){
	stack<char> stk;
	int len = str.length();
	for(int i = 0; i < len; i ++){
		if(str[i] == ')' && !stk.empty()){
			if(stk.top() == '(') 
				stk.pop(); 
			else 
				stk.push(str[i]); 
		} 
		else stk.push(str[i]); 
	} 
	int cnt = 0, n= stk.size();
	while(!stk.empty() && stk.top() == '('){
		stk.pop();
		cnt ++; 
	} 
	return (n / 2 + cnt % 2);
	 
} 
 int main(){
 	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str; cin >> str;
		cout << Solve(str) << endl; 
	}
	return 0;
 }
