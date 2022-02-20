#include<bits/stdc++.h>
using namespace std;
char numtochar(int n) {
	return (char)(n+48);
}
int main() {
	int n, h=0, m=0, s=0;
	string h1, m1, s1;
	cin >> n;
	while (n>=3600) {
		n-=3600;
		h++;
	}
	while (n>=60 && n<3600) {
		n-=60;
		m++;
	}
	if (n<60) {
		s=n;
	}
	if (s<10) {
		s1=numtochar(s);
		s1.insert(0,1,'0');
	}
	if (s>=10) {
		s1.insert(0,1,numtochar(s%10));
		s1.insert(0,1,numtochar(s/10));
	}
	if (m<10) {
		m1=numtochar(m);
		m1.insert(0,1,'0');
	}
	if (m>=10) {
		m1.insert(0,1,numtochar(m%10));
		m1.insert(0,1,numtochar(m/10));
	}
	if (h<10) {
		h1=numtochar(h);
		h1.insert(0,1,'0');
	}
	if (h>=10) {
		h1.insert(0,1,numtochar(h%10));
		h1.insert(0,1,numtochar(h/10));
	}
	cout << h1 << ":" << m1 << ":" << s1;
	return 0;
}
