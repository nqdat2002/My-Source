#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	long long int n,k;
	cin>>n>>k;
	unsigned long long int x=4*(n)*(n)-1;
	cout<<(unsigned long long int )((unsigned long long)x*(n)/3+(unsigned long long int )(2*n+1)*(2*n+1))%k;
	
	
}
