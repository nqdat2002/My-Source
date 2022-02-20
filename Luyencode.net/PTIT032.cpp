#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+2];
    for(int i=1;i<=n;i++) 
		cin>>a[i];
    for(int i=1;i<=n;i++){
    	int z=1,e=0,j=i,k=i-1;
    	while (a[k]<a[j]&&k>0){
    		k--;
    		j--;
    		z++;
		}
		j=i;
    	k=i+1;
    	while(a[k]<a[j]&&k<=n){
    		k++;
    		j++;
    		z++;
		}
	cout << z <<' ';
	}
}
