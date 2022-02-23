#include <bits/stdc++.h>
#define R 1000000007
using namespace std;
long long P(int n,int k){
	long long t=1;
	for(int i=n-k+1;i<=n;i++){
		t=t*i%R;
	}
	return t;
}
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<P(n,k)<<endl;
	}
}
