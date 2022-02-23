#include <bits/stdc++.h>
using namespace std;
int dem(string s){
	stack<char> c;
	for(int i=0;i<s.length();i++){
		if(s[i]==')'&&!c.empty()){
			if(c.top()=='(') c.pop(); 
			else c.push(s[i]); 
		} 
		else c.push(s[i]); 
	} 
	int count=0,n=c.size();
	while(!c.empty()&&c.top()=='('){
		c.pop();
		count++; 
	} 
	return n/2+count%2;
	 
} 
 int main(){
 	int t;
	cin>>t;
	fflush(stdin);
	while(t--){
		string s;
		cin>>s;
		cout<<dem(s)<<endl; 
	}
 }
