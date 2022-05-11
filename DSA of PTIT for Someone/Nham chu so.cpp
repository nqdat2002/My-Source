#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string change(string s, int x, int y){
	int n = s.size();
	for(int i = 0; i < n; i++){
		if(s[i] - '0' == x){
			s[i] = y + '0';
		}
	}
	return s;
}
int main(){
	string a, b; cin >> a >> b;
	cout << stoll(change(a, 6, 5)) + stoll(change(b, 6, 5)) << " ";
	cout << stoll(change(a, 5, 6)) + stoll(change(b, 5, 6)) << endl;
}
