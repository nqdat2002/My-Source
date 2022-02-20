#include<bits/stdc++.h>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
	int n,i,j,dem;
	long long a[1000005];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	long long d=a[1]-a[0];
	dem=0;
	for(j=1;j<n;j++){
		if(a[j]!=(a[0]+j*d)){
			dem++;
			break;
		}
	}
	if(dem==0)
		cout<<"YES";
	else cout<<"NO";
	return 0;
}
