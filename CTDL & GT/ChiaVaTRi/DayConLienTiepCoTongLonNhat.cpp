#include <bits/stdc++.h>
using namespace std;
int maxsum(int a[],int n){
	int maX=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=a[i];
		for(int j=i+1;j<n;j++){
			sum+=a[j];
			maX=max(sum,maX); 
		} 
	} 
	return maX; 
} 
int main(){
	int t;cin>>t;
	while(t--) {
		int n;cin>>n;
		int a[n]; 
		for(int i=0;i<n;i++){
			cin>>a[i]; 
		} 
		cout<<maxsum(a,n)<<endl; 
	}
	return 0; 
}
