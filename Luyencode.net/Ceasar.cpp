#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int l=s.length();
	int n;cin>>n;
    for(int i=0;i<l;i++){
		if(s[i]-n<'a'){
			cout<<(char)('z'-'a'+s[i]-n+1);
		}else cout<<(char)(s[i]-n);
	}
	return 0;
}