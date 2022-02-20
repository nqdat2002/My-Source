#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[105],s=0,m=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]==1) s=s+1;
		else m=m+1;
	}
	cout<<abs(m-s);
	return 0;
}
			
	
