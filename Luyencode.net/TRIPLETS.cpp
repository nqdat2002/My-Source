/*
#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[3],b[3];
	int p=0,d=0,i;
	for(i=0;i<3;i++)
		cin>>a[i];
	for(i=0;i<3;i++)
		cin>>b[i];
	for(i=0;i<3;i++){
		if(a[i]>b[i])
			d++;	
		else if(a[i]<b[i]) 
			p++;
	}
	cout<<d<<' '<<p;
	return 0;
}*/
#include<stdio.h>
int main(){
	int a[3],b[3];
	int p=0,d=0,i;
	for(i=0;i<3;i++) scanf("%d",&a[i]);
	for(i=0;i<3;i++) scanf("%d",&b[i]);
	for(i=0;i<3;i++){
		if(a[i]>b[i]) d++;	
		else if(a[i]<b[i]) p++;
	}
	printf("%d %d",d,p);
	return 0;
}


