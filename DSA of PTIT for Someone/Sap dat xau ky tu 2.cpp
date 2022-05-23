#include <bits/stdc++.h>
using namespace std;
int Check(string s, int D){
	map<char, int> mp;
	int m = 0, len = s.size();
	for(int i = 0; i < len; i ++){
		mp[s[i]]++;
		m = max(m, mp[s[i]]);
	}
	if(m < len / (D - 1))
		return 1;
	return -1;

}
int main(){
	int t; cin >> t;
	while(t--){
		int D; cin >> D;
		string s; cin >> s;
		cout << Check(s, D) << endl;
	}
	return 0;
}
