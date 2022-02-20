#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,k=1,a,z;
	cin >> n >> a;
	z=n;
	int b[a][2],c[34];
	for(int i=0;i<34;i++) 
		c[i]=0;
		
	for(int i=0;i<a;i++)
	 	for(int j=0;j<2;j++) 
			cin>>b[i][j];
	c[n]=1;	
   	for(int i=0;i<a;i++)
	 	if(b[i][1]==z){
	 		z=b[i][0];
			if(c[z]==0)	
				k++;
	 		c[z]=1;
	}
	cout << z << ' ' << k;
	
	return 0;
}
