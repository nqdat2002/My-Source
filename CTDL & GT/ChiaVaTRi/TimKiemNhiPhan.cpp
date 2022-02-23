#include <iostream>
using namespace std;
int search(int a[], int n,int k, int l, int r) {
    if(l<=r){
    	int mid=l+(r-l)/2;
		if(a[mid]==k) return mid+1;
		if(a[mid]<k) return search(a,n,k,mid+1,r);
		return search(a,n,k,l,mid-1); 
	}
	return -1; 
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(search(a,n,k,0,n)!=-1) cout<<search(a,n,k,0,n)<<endl;
		else cout<<"NO"<<endl; 
	}
}
