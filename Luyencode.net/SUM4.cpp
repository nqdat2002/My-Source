#include<iostream>
#include<iomanip>
using namespace std;
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
		cin>>a[i];
}
void solve(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<fixed<<setprecision(8)<<(double)(2-2/((double)a[i]+1))<<"\n";
}
int main()
{
	int n; cin>>n;
	int a[n];
	nhapmang(a,n);
	solve(a,n);	
}