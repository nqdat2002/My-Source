#include<iostream>
#include<algorithm> 
using namespace std;  
int main() { 
	int t; 
	cin>>t; ;
	while(t--){ 
		long long n; 
		cin>>n;
		long long a[n];
		int r=1000000007;
		for(long long i=0;i<n;i++){
			cin>>a[i];
		} 
		long long max=0; 
		sort(a,a+n);
		for(int i=0;i<n;i++){
			max=max+((i%r)*(a[i]%r))%r;
			max=max%r;
		}
		cout<<max<<endl; 
	}
	return 0; 
}
