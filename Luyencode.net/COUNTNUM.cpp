#include <iostream>
#include <string>
using namespace std;
int dem(string s) {
	s += " ";
	int cnt = 0;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] >= '0' && s[i] <= '9' && s[i+1]==' ') {
			cnt++;
		}
	}
	return cnt;
}
int main(){
	string s;
	getline(cin, s);
	cin.ignore();
	cout << dem(s);
	return 0;
}
