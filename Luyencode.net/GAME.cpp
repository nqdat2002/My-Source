#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	if(n==2&&m==2) cout<<"1";
	
	else{
		int a=(m-3)/2;
		int b=(n-3)/2;
		cout<<(long long)a*b+m+n-2;
	}
	return 0;
}
