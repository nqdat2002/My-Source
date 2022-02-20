#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	int n,i;
	int M[100005];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>M[i];
	}
	sort(M,M+n);
	int a=M[n-1],b=M[n-2];
	int min=a-b;
	for(i=n-2;i>=0;i--){
        for(int j=i-1;j>=0;j--){
        	if(M[i]-M[j]<=min)
        		min=M[i]-M[j];
        	break;
		}
    }
	cout<<min;
	return 0;	
}
