#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
//	FileIO();
	string s; cin >> s;
	stack<char> a, b;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (s[i] == '<') {
			if (a.size()) {
				b.push(a.top());
				a.pop();
			}
		}
		else if (s[i] == '>') {
			if (b.size()) {
				a.push(b.top());
				b.pop();
			}
		}
		else if (s[i] == '-') {
			if (a.size())
				a.pop();
		}
		else a.push(s[i]);
	}
	while (a.size()) {
		b.push(a.top());
		a.pop();
	}
	while (b.size()) {
		cout << b.top();
		b.pop();
	}
	return 0;
}