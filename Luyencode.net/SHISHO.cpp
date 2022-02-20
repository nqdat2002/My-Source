#include<bits/stdc++.h>
using namespace std;
string too_string(int n) {
	stringstream ss;
	ss << n;
	string s=ss.str();
	return s;
}
int too_num(string s) {
	stringstream ss(s);
	int n=0;
	ss >> n;
	return n;
}
bool prime(int n) {
	if (n<2) return false;
	else {
		for (int i=2; i*i<=n; ++i) {
			if (n%i==0) {
                return false;
            }
		}
	}
	return true;
}
string reversee(string s) {
	string reversee="";
	int n=s.length();
	while (n>0) {
		reversee+=too_string(too_num(s)%10);
		s.erase(s.begin()+n-1);
		n-=1;
	}
	return reversee;
}
int main() {
	int n, dem=0; 
	string s[50000];
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> s[i];
	}
	for (int i=0; i<n; ++i) {
		if (prime(too_num(reversee(s[i])))) {
			++dem;
		}
	}
	cout << dem;
	return 0;
}
