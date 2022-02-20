#include <bits/stdc++.h>
using namespace std;
long long tong(int n)
{	
	int i;
	long long sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i*i-(i-1)*(i-1);
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	cout<<tong(n);
	return 0;
}
