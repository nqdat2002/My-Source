#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	int m=0;
	int a[n+3];
	a[0]=0;
	long long res=0;
	for (int i=1; i<=n; i++) {
	    int x;
	    cin>>x;
	    if (x%2==1) {m++; a[m]=i;}
	} 
 	a[m+1]=n+1;
	for (int i=1; i<=m-k+1; i++) res=res+(long long) (a[i]-a[i-1])*(a[i+k]-a[i+k-1]);
	cout<<res;
    return 0;
}
