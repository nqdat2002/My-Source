#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
	long long int a[105][105];
	int i,j;
	a[0][0]=1,a[0][1]=2,a[1][1]=3,a[1][0]=4;
	for(i=2;i<105;i++){
		for(j=2;j<105;j++){
			if(i>j){
				if ( i % 2 == 0) a[i][j]=(long long int)i*i-j+1;
	       		else a[i][j] =(long long int)(i-1)*(i-1)+j;
	       	}
	        else{ 
	           	if (j % 2 == 1) a[i][j]=(long long int )j*j-i+1;
	           	else a[i][j] =(long long int)(j-1)*(j-1)+i;
	        }
		}
	}
	long t,x,y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		cout << a[x][y] << endl;
	}
	return 0;
}
#include<iostream> 
using namespace std;
int main(){ 
	int n;
	cin>>n;
	long arr[100][2];
	for (int i = 0;i < n;i++)  
	   	for (int j = 0; j < 2 ; j++)
			cin >> arr[i][j];   
	for (int i = 0;i < n;i++){
		long long int key=0;   
	    for (int j = 0; j < 2 ; j++){
	       	int x = arr[i][0] , y = arr[i][1];
	       	if (x > y){
	       		if ( x % 2 == 0) key =(long long int) x*x - y +1;
	       		else key =(long long int)(x-1)*(x-1)+y;
	       	}
	        else{ 
	           	if (y % 2 == 1) key = (long long int )y*y -x+1;
	           	else key =(long long int)(y-1)*(y-1)+x;
	        }
		}
		cout << key << endl;
	}
	return 0;
}
