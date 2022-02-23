#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <string> s;
		if(n>0){
			s.push_back("0");
			s.push_back("1");
			int i,j;
			for(i=2;i<(1<<n);i=i<<1){
				for(j=i-1;j>=0;j--){
					s.push_back(s[j]); 
				} 
				for(j=0;j<i;j++){
					s[j]="0"+s[j]; 
				} 
				for(j=i;j<2*i;j++){
					s[j]="1"+s[j]; 
				} 
			}
			for(i=0;i<s.size();i++){
				cout<<s[i]<<" "; 
			} 
			cout<<endl; 
		} 
	} 
} 
