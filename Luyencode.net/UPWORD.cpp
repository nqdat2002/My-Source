#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	int dem(0);
	for (int i=0; i<s.length(); ++i) {
		if ((s[i]<='z' && s[i]>='a') && (s[i+1]<='Z' && s[i+1]>='A')) ++dem;
	}
	if (s[0]<='Z' && s[0]>='A') ++dem;
	cout << dem;
	return 0;
}
