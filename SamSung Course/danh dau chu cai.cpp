#include<bits/stdc++.h>
using namespace std;
int main(){
	string str; cin >> str;
	set<char> st;
	for(int i = 0; i < str.size(); i ++){
		st.insert(str[i]);
	}
	cout << st.size() << endl;
	return 0;
}

