#include<bits/stdc++.h>
using namespace std;
string add(string a, string b){
	string res ="";
	int nho=0;
	while(a.size()<b.size()) a= "0"+a;
	while(a.size()>b.size()) b= "0"+b;
	int len=a.size()-1;
	for(int i=len;i>=0;i--){
		int so=int(a[i]-'0') +int(b[i]-'0')+nho;
		res=char(so%10+'0')+res;
		nho=so/10;
	
	}
	if(nho>0) res=char(nho+'0')+res;
	return res;
}
int main(){
	string a,b;
	cin>> a >> b;
	cout <<add(a,b);
	
}
