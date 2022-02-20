#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
string a[1005];
string add(string a,string b){
	string res="";
	while(a.length()<b.length()) a="0"+a;
	while(b.length()<a.length()) b="0"+b;
	int nho=0;
	for(int i=a.length()-1;i>=0;i--){
		int tmp=int(a[i]-'0')+int(b[i]-'0')+nho;
		nho=tmp/10;
		tmp=tmp%10;
		res=(char)(tmp+'0')+res;
	}
	if(nho>0) res=char(nho+'0')+res;
	return res;
}
string mul(string s1,string s2){
	int len1=s1.size();
	int len2=s2.size();
	int len=len2+len1;
	vector<int> a,b;
	for(int i=0;i<len1;i++)
	a.push_back(int(s1[i]-'0'));
	for(int i=0;i<len2;i++)
	b.push_back(int(s2[i]-'0'));
	vector< vector < int > > res(len2);
	int index=0;
	for(int i=len2-1;i>=0;i--){
		int nho=0,so=0,t=0;
		while(t<index){
			res[index].push_back(0);
			t++;
		}
		for(int j=len1-1;j>=0;j--){
			so=a[j]*b[i]+ nho;
			res[index].push_back(so%10);
			nho=so/10;
		}
		if(nho>0) res[index].push_back(nho);
		while(res[index].size()<len) res[index].push_back(0);
		reverse(res[index].begin(),res[index].end());
		index++;	
	}
	int nho=0;
	string ans="";
	for(int j=res[0].size()-1;j>=0;j--){
		int so=nho;
		for(int i=0;i<res.size();i++)
			so+=res[i][j];
		ans=char(so%10+'0')+ans;
		nho=so/10;			
	}
	if(nho>0) ans=char(nho+'0')+ans;
	while(ans[0]=='0') ans.erase(ans.begin());
	return ans;
}
void Solve(){
	a[0]="1";
	a[1]="1";
	for(int i=2;i<=999;i++){
		string tmp="";
		for(int j=0;j<i;j++){
			string tmp1="0";
			tmp=add(tmp,mul(a[j],a[i-j-1]));
		}
		a[i]=tmp;
	}
}
int main(){
	Solve();
	int n;
	cin >> n;
	cout << a[n];
}
