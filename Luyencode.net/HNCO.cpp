#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long e=1;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		e=e*2%1000000007;
	}
	cout << e-1;
	return 0;
}
