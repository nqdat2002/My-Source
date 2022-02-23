#include <bits/stdc++.h>
using namespace std;
int sum[1001];
int tong(int a[],int n){
	for(int i=0;i<n;i++){
		sum[i]=a[i];
	}
	int Max=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[j]<a[i]) sum[i]=max(sum[i],sum[j]+a[i]);
		}
		Max=max(Max,sum[i]);
	}
	return Max;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<tong(a,n)<<endl;
	}
}
