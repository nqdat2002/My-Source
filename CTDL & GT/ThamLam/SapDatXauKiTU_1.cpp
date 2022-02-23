#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		int dem[500];
		memset(dem,0,sizeof(dem)); 
		for(int i=0;i<s.length();i++){
			dem[s[i]]++; 
		} 
		int max=0; 
		for(int i=0;i<=300;i++){
			if(dem[i]>max) max=dem[i]; 
		} 
		if(max<=(s.length()-max+1)) cout<<1<<endl;
		else cout<<-1<<endl; 
	} 
}
