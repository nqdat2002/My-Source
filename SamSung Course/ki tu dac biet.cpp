#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		long long n, k;
		string str;
		cin >> str >> k;
		n = str.size();
		while(n < k) n *= 2;
		while(n - str.length() > 0){
			if(k > n / 2){
				k = k - n/ 2;
				if(k > 1) k = k - 1;
				else k = n / 2;
			}
			n /= 2;
		}
		cout << str[k - 1] << endl;
	}
	return 0;
}