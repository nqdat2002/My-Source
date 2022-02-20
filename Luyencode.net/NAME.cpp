#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		string s, a; getline(cin, s);
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		stringstream ss(s);
		vector<string> res;
		res.clear();
		while(ss >> a){
			a[0] = toupper(a[0]);
			res.push_back(a);
		}
		for(int i = 0; i < res.size() - 1; i ++) cout << res[i] << " ";
		cout << res[res.size() - 1];
		cout << endl;
	}
	return 0;
}