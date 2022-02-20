#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll L(ll a, ll b, char c){
	if(c == '+') return a + b; 
	if(c == '-') return a - b;
	if(c == '*') return a * b;
	if(c == '/') return a / b;
} 
ll Solve(string str){
	int n = str.length();
	stack<ll> stk;
	for(int i = 0; i < n; i ++){
		if(isdigit(str[i])) 
			stk.push(str[i] - '0');
		else{
			ll s1 = stk.top();
			stk.pop();
			ll s2 = stk.top();
			stk.pop();
			ll tmp = L(s2, s1, str[i]); 
			stk.push(tmp); 
		}  
	} 
	return stk.top(); 
} 
int main(){
	int t; cin >> t;
	cin.ignore(); 
	while(t --){
		string str; cin >> str; 
		cout << Solve(str) << endl; 
	} 
	return 0;
}