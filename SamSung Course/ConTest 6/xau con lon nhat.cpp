#include <bits/stdc++.h>
using namespace std;
int main(){
	string str; cin >> str;
	string res = "";
	for(int i = str.length() - 1; i >= 0; i --){
		if(str[i] >= res[0]) 
			res = str[i] + res;
	}
	cout << res << endl;
	return 0;
}