#include<bits/stdc++.h>
#include<string.h>
using namespace std;
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
			so +=res[i][j];
		ans=char(so%10+'0')+ans;
		nho=so/10;			
	}
	if(nho>0) ans = char(nho+'0')+ans;
//	while(ans[0]=='0') ans.erase(ans.begin());
	return ans;
}
int main(){
    string a,b;
    cin>>a>>b;
    int c=0;
    for(int i=0;i<a.size();i++){
    	if(a[0]=='0') {
    		c++;
		cout<<'0';
		break;
		}
	}
	if(c==0)
    cout<<mul(a,b)<<'\n';
    return 0;
}
