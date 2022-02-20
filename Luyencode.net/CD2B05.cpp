#include<bits/stdc++.h>
using namespace std;
int to_num(char c) {
	return c-'0';
}
int sum1 (string s) {
	int sum=0;
	for (int i=0; i<s.length(); ++i) {
		sum+=to_num(s[i]);
	}
	return sum;
}
int sum2 (int n) {
	int sum=0;
	if (n>=0 && n<=9) return n;
	else {
	again:
		while (n>0) {
			sum+=n%10;
			n/=10;
		}
		if (sum>9){
			n=sum;
			sum=0;
			goto again;
		}	
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	string s[100000];
	for (int i=0; i<n; ++i) {
		cin >> s[i];
	}
	for (int i=0; i<n; ++i) {
		if (sum2(sum1(s[i]))==9) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0; 
}
