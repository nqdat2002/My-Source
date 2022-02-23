#include <iostream>
using namespace std;
int search(int a[],int b[], int n){
	int temp=n; 
	int l=0,r=n-1;
	while(l<=r){
		int mid=(l+r)/2 ;
		if(a[mid]==b[mid]) l=mid+1;
		else{
			temp=mid;
			r=mid-1; 
		} 
	} 
	return temp; 
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n]; 
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		for(int i=0;i<n-1;i++){
			cin>>b[i]; 
		} 
		cout<<search(a,b,n)+1<<endl; 
	} 
}
