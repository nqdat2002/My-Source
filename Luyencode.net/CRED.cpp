#include <bits/stdc++.h>
using namespace std;
int tong(int n){
	int a=0,i,b=n;
	while(n>0){
		i=n%10;
		n=n/10;
		a=a+i;
	}
	return (a+b);
}
int main(){
	int n,m,i;
	int dem=0;
	cin>>n>>m;
	int a;
	for(a=tong(n);a<=m;)
		{
			dem++;
			a=tong(a);
		}
	cout<<dem+1;
	return 0;
}
