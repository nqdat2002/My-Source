#include<iostream>
#include<string> 
using namespace std; 
int main() { 
	int t; 
	cin>>t; ;
	while(t--) { 
		 int n;
		 cin>>n;
		 int a[10]={1,2,5,10,20,50,100,200,500,1000}; 
		 int count=0;
		 for(int i=9;i>=0;i--){
		 	count+=n/a[i];
			n=n%a[i]; 
		 } 
		 cout<<count<<endl; 
	}
	return 0; 
}
