#include<bits/stdc++.h>

using namespace std;

int main() {
	char s;
	cin >> s;
	if (s >= 'a' && s < 'z') {
		s = s + 1;
	}
	else if (s = 'z') {
		s = 'a';
	}
//	else 
//	 	cout << "sai";
	cout << s;
    return 0;
}