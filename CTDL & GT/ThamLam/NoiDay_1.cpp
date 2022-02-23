#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;	
		cin>>n; 
		int a[n]; 
		priority_queue<long long,vector<long long>,greater<long long> > b; 
		for(int i=0;i<n;i++){
			cin>>a[i]; 
			b.push(a[i]); 
		} 
		long long tmp;
		long long sum=0; 
		while(b.size()>1){
			 tmp=0; 
			 tmp+=b.top();
			 b.pop(); 
			 tmp+=b.top();
			 b.pop();
			 sum+=tmp; 
			 b.push(tmp);  
		} 
		cout<<sum<<endl; 
	} 
}
