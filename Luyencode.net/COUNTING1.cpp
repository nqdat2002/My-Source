#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n,i,m,h,j,c,f,a;
	int M[100005],B[10000],G[10000],C[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>M[i];	
	sort(M,M+n);
	for(i=0;i<n;i++){
		B[i]=1;
		for(j=i+1;j<n;j++)
			if(M[i]==M[j])
				B[i]++;
		G[i]=B[i];
		a=1;
		for(j=0;j<i;j++)
			if(M[j]==M[i])
				a++;
		if(a>=2) continue;
	}
	f=0;
	for(i=0;i<n;i++)
		if(B[i]>f)
			f=B[i];
	for(i=0;i<n;i++){
		if(G[i]==f)
			cout<<M[i]<<' '<<f;
	}
	return 0;
}
