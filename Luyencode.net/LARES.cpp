#include <bits/stdc++.h>
using namespace std;
int timmin(int a,int b){
    int min=a;
    if(b<min) min=b;
    return min;
}
int main(){
	int n,m,k,i;
	cin>>m>>n>>k;
	if(m==1||n==1||m+n<k) cout<<"0";
	else if(m+k<n) cout<<(m-1)/2;
	else{
		long x=m+n-k;
		for(i=timmin(m,n);i>=0;i--){
			if(x-2*i-i>=0){
				cout<<i;
				break;
			}		
		}
	}
	return 0;
}
