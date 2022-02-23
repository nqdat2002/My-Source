#include <bits/stdc++.h>
using namespace std;
long long Dec(string s){
	long long dec=0, temp=1;
	for(int i=s.size()-1;i>=0;i--){
		dec+=temp*(int)(s[i]-'0');
		temp*=2; 
	} 
	return dec; 
} 
int main(){
	int t;cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		cout<<Dec(s1)*Dec(s2)<<endl; 
	} 
}
