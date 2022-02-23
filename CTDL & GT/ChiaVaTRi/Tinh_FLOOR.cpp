#include  <bits/stdc++.h>
using namespace std;
int floor(long long x,long long a[], int l, int r){
	if(l>r) return -1; 
	if(x>=a[r]) return r;
	int mid=(l+r)/2;
	if(a[mid]==x) return mid;
	if(mid>0&&a[mid-1]<=x&&a[mid]>x) return mid-1;
	if(x<a[mid]) return floor(x,a,l,mid-1);
	return floor(x,a,mid+1,r); 
} 
int main(){
	int t;cin>>t;
	while(t--){
		long long n;
		long long x;
		cin>>n>>x;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		} 
		if(floor(x,a,0,n-1)!=-1) cout<<floor(x,a,0,n-1)+1<<endl;
		else cout<<-1<<endl; 
	} 
}
