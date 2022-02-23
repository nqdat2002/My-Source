#include <bits/stdc++.h>
#include <stack> 
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		stack <int> s; 
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.push(a[i]); 
		} 
		stack <int> s2;
		int k=n-2;
		s.pop();
		s2.push(-1);
		while(!s.empty()){
			int tmp=s.top();
			s.pop(); 
			int j=k; 
			for(;j<n;j++){
				if(tmp<a[j]) {
					s2.push(a[j]); 
					break; 
				} 
			}
			if(j==n) s2.push(-1); 
			k--; 
		} 
		while(!s2.empty()){
			cout<<s2.top()<<" ";
			s2.pop(); 
		} 
		cout<<endl; 
	} 
}
