#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		int to[n];//phan tu dau tien lon hon 
		int nho[n];//phan tu nho hon phan tu tiep theo 
		stack <int> s1;
		for(int i=n-1;i>=0;i--){
			while(!s1.empty()&&a[s1.top()]<=a[i]){
				s1.pop(); 
			} 
			if(s1.empty()){
				to[i]=-1; 
			} 
			else to[i]=s1.top();
			s1.push(i); 
		}
		stack <int> s2;
		for(int i=n-1;i>=0;i--){
			while(!s2.empty()&&a[s2.top()]>=a[i]){
				s2.pop(); 
			} 
			if(s2.empty()){
				nho[i]=-1; 
			} 
			else nho[i]=s2.top();
			s2.push(i); 
		} 
		for(int i=0;i<n;i++){
			if(to[i]!=-1&&nho[to[i]]!=-1) cout<<a[nho[to[i]]]<<" ";
			else cout<<-1<<" "; 
		} 
		cout<<endl; 
	} 
} 
