#include<bits/stdc++.h>
using namespace std;
int to_num(string s) {
	stringstream ss(s);
	int n=0;
	ss >> n;
	return n;
}
string ch(string a, string max) 
{
    int l_a = a.length(), l_max = max.length();
	a.insert(l_a, l_max-l_a, '0');  
	return a; 
}
string noi(string s[], int n) {
	string max_string="0", s_result="";
	for (int i=0; i<n; ++i) {
		if (to_num(max_string)<to_num(s[i])) {
			max_string=s[i];
		}
	}
	for (int i=0; i<n; ++i) {
		for (int j=i+1; j<n; ++j) {
			if (to_num(ch(s[i],max_string))<to_num(ch(s[j],max_string))) {
				swap(s[i],s[j]);
			}
		}
	}
	for (int i=0; i<n; ++i) {
		s_result+=s[i];
	}
	return s_result;
} 
int main () {
    string s[100];
    int n;
    cin >> n;
    for (int i=0; i<n; ++i) {
    	cin >> s[i];
	}
	cout << noi(s,n);
	return 0;
}
