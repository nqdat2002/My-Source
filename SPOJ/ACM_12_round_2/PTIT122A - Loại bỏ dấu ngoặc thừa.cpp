#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
		string s; getline(cin, s);
		stringstream ss(s);
		string tmp;
		vector<string> v;
		while(ss >> tmp) v.push_back(tmp);
		s = "";
		for(auto x: v) s += x;
		stack<string> st, res;
		for(int i = 0; i < s.size(); ++i){
			string tmp = "";
			tmp.push_back(s[i]);
			if(tmp == "+" || tmp == "-" || tmp == "(") st.push(tmp);
			else if(tmp >= "A" && tmp <= "Z") res.push(tmp);
			else if(tmp == ")"){
				while(1){
					string c = st.top(); st.pop();
					if(c == "("){
						if(!st.empty() && st.top() == "-"){
							string b = res.top();
							if(b.size() >= 2){
								res.pop();
								b = "(" + b + ")";
								res.push(b);
							}
						}
						break;
					}
					string x = res.top(); res.pop();
					string y = res.top(); res.pop();
					res.push(y + c + x);
				}
			}
		}
		while(!st.empty()){
			string c = st.top(); st.pop();
			string x = res.top(); res.pop();
			string y = res.top(); res.pop();
			res.push(y + c + x);
		}
		cout << res.top() << endl;
	}
}
