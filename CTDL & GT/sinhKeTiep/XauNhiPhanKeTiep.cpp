#include<iostream>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		int n=s.length();
		for(int i=n-1;i>=0;i--){
			if(s[i]=='0'){
				s[i]='1';
				break;
			}else s[i]='0';
		}
		for(int i=0;i<n;i++) cout<<s[i];
		cout<<endl;
	}	
	return 0;
}
