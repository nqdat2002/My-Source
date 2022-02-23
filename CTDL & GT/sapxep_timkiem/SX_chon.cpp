#include<bits/stdc++.h>
using namespace std;
#define MAX 100  
int main(){
	int n;
	cin>>n;
	int a[MAX];	
	for(int i=1;i<=n;i++){
		cin>>a[i]; 
	}
	int min;
	for(int i=1;i<n;i++){
		min=i; 
		for(int j=i+1;j<=n;j++){
			if(a[j]<a[min]){
				min=j;  
			}
	}
		swap(a[i],a[min]); 
		cout<<"Buoc "<<i<<": ";
		for(int k=1;k<=n;k++){
			cout<<a[k]<<" "; 
		}
		cout<<endl; 
	} 
	return 0;
}
