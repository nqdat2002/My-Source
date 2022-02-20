#include <bits/stdc++.h>
using namespace std;
bool check(string str){
	int cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < str.size() - 1; i ++){
		if(str[i] >= str[i + 1]) cnt1 ++;
		if(str[i] <= str[i + 1]) cnt2 ++;
	}
	if(cnt1 == str.size() - 1 || cnt2 == str.size() - 1) return true;
	else return false;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string str; cin >> str;
		if(check(str)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
