#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str;
		cin >> str;
		int r;
		if(str.size() == 1)
			r = (str[0] - '0') % 4;
		else{
			r = (str[str.size() - 2] - '0') * 10 + str[str.size() - 1] - '0';
			r %= 4;
		}
		if (r == 0) 
			cout << 4;
		else 
			cout << 0;
		cout << endl;
	}
	return 0;
}
