#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack<int> mo;
		vector<int> v;
		int n = s.length(), id = 1, z;
		for (int i = 0; i < n; i++) {
			if (s[i] == '(') {
				mo.push(id);
				v.push_back(id);
				id ++;
			}
			else if (s[i] == ')') {
				v.push_back(mo.top());
				mo.pop();
			}
		}
		for(auto x:v) cout << x << " ";
		cout << endl;
	}
	return 0;
}