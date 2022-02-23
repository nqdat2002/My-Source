#include<bits/stdc++.h>
using namespace std;
#define MAX 100  
bool check(int a[],int n){ 
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) return false; 
		} 
	} 
	return true; 
} 
int main(){
	int n;
	cin>>n;
	int a[MAX];	
	for(int i=0;i<n;i++){
		cin>>a[i]; 
	}
	int key;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j+1]<a[j]) swap(a[j],a[j+1]) ;
		}  
		cout<<"Buoc "<<i+1<<": ";
		for(int k=0;k<n;k++){
			cout<<a[k]<<" "; 
		}
		cout<<endl; 
		if(check(a,n)==true){
			break; 
		} 
	} 
	return 0;
}
