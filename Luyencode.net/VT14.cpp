#include <bits/stdc++.h>
using namespace std;
#define mx 10005
#define vc 1000000
int main(){
	int n,i,j,k,a[10005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	k=0;
	int x,max=-vc;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			x=a[i]*a[j];
			if(x>max) max=x;
			else continue;
		}
	}
	cout<<max;
}
