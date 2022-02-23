#include<bits/stdc++.h>
using namespace std;
#define MAX 100  
int main(){
	int n;
	cin>>n;
	int a[MAX];	
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	int key;
	for(int i=0;i<n;i++){
		key=a[i]; 
		int j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j=j-1; 
		}
		a[j+1]=key;  
		cout<<"Buoc "<<i<<": ";
		for(int k=0;k<=i;k++){
			cout<<a[k]<<" "; 
		}
		cout<<endl; 
	} 
	return 0;
}
