#include <bits/stdc++.h>
using namespace std;
bool check(char s){
	if(s=='+'||s=='-'||s=='*'||s=='/') return true;
	else return false;
}

int main(){
	int t;
	cin>>t;
	fflush(stdin);
	while(t--){
		string s;cin>>s;
		int a=s.length();
		stack<string>t;
		for(int i=a-1;i>=0;i--){
			if(check(s[i])==true){
				string x1=t.top(); t.pop();
				string x2=t.top(); t.pop();
				string tmp=x1+x2+s[i];
				t.push(tmp);
			}
			else t.push(string(1,s[i]));
		}
		cout<<t.top()<<endl;
	}
}
