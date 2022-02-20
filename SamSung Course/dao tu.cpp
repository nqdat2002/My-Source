#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	cin.ignore();
	while (t--) {
	    vector<string> s;
		string str;getline(cin, str);
		stringstream ss(str);
		string token;
		while(ss >> token){
			reverse(token.begin(), token.end());
		    s.push_back(token);
		}
		for(int i = 0; i < s.size(); i++){
			cout << s[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

