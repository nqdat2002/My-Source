#include<bits/stdc++.h>
// code tham khao hieunguyen07012004
using namespace std;
char numtochar(int n) {
	return char(n+48);
}
int main() {
	string s, a="";
	cin >> s;
	int count=1;
	for (int i=s.size()-1; i>=0; --i) {
		if (s[i]==s[i-1]) {
			++count;
		}
		else {
			a.insert(a.begin() + 0, s[i]);
			a.insert(a.begin() + 0, numtochar(count));
			count=1;
		}
	}
	cout << a;
	return 0;
}