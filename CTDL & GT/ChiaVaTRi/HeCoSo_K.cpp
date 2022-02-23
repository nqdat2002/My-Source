#include <bits/stdc++.h>
using namespace std;
string tong(int k,string s1,string s2){
	int a=s1.length();
	int b=s2.length(); 
	string sum,s;
	s="";
	sum="";
	int j=abs(a-b);
	for(int i=0;i<j;i++){
		s+="0"; 
	} 
	if(a<b){
		s1=s+s1; 
	} 
	else{
		s2=s+s2; 
	} 
	int kq=0,nho=0;
	for(int i=max(a,b)-1;i>=0;i--){
		kq=nho+(s1[i]-'0')+(s2[i]-'0');
		nho=kq/k;
		kq%=k;
		sum=(char)(kq+'0')+sum; 
	} 
	if(nho>0) sum=(char)(nho+'0')+sum;
	return sum; 
} 
int main(){
	int t;cin>>t;
	while(t--){
		int k;
		string s1,s2;
		cin>>k>>s1>>s2;
		cout<<tong(k,s1,s2)<<endl; 
	} 
}
