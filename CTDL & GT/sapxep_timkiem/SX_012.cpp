#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n]; 
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		}
		int dem[3];
		dem[0]=0;dem[1]=0;dem[2]=0; 
		for(int i=0;i<n;i++){
			if(a[i]==0) dem[0]++;
			if(a[i]==1) dem[1]++; 
		} 
		for(int i=0;i<dem[0];i++) cout<<0<<" ";
		for(int i=dem[0];i<dem[0]+dem[1];i++) cout<<1<<" ";
		for(int i=dem[0]+dem[1];i<n;i++) cout<<2<<" "; 
		cout<<endl;
	}	
	return 0;
}
