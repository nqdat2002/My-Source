#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k;
		string s;
		cin>>k>>s;
		int l=s.length();
		if(k>=l) cout<<0<<endl;
		else{
			int dem[27]={0};
			for(int i=0;i<l;i++){
				dem[s[i]-'A']++; 
			} 
			priority_queue <int> p;
			for(int i=0;i<26;i++){
				p.push(dem[i]); 
			} 
			while(k--){
				int tmp=p.top();
				p.pop();
				tmp--;
				p.push(tmp); 
			} 
			long long sum=0;
			while(!p.empty()){
				int x=p.top();
				sum+=pow(x,2);
				p.pop(); 
			}
			cout<<sum<<endl; 
		} 
	} 
} 
