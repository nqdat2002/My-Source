#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	double a[n];
	int lmax=-1;
	int lmax1=1;
	
	for(int i=0; i<n; i++) 
	{
		cin>>a[i];
		if(a[i]==0) a[i]=1;
	}
	
	for(int i=0; i<n-1; i++)
	{
		if(a[i]*a[i+1]<0)
		{
			lmax1++;
			lmax=fmax(lmax, lmax1);
		}
		else lmax1=1;
	}
	cout<<lmax;
	return 0;
}
