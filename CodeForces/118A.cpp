#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	getline(cin, s);
	for(int i=0;i<s.size();i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='u'&&s[i]!='i')
		cout << "." << s[i];
	}
	return 0;
}