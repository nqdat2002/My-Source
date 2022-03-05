#include <bits/stdc++.h>
using namespace std;
long long Change(string s){
	long long res = 0;
	for(int i = 0; i < s.size(); i ++)
		res =  res * 2 + s[i] - '0';
	return res; 
} 
int main(){
	int t; 
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		cout << Change(s1) * Change(s2) << endl; 
	} 
}
