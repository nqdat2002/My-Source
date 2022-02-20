/*#include<stdio.h>
#include<math.h>
int main(){
	int t,n,c=0;
	long long int sum[21];
	sum[0]=3;
	for(int i=1;i<=20;i++){
			sum[i]=3*pow(10,i)+sum[i-1];
		}
	scanf("%d",&n);
	if(n==3||n==1) printf("1");
	else{
		for(int i=0;i<=20;i++){
			if(sum[i]%n==0){
				c++;	
				printf("%d",i+1);
				break;
			}
		}
		if(c==0) printf("-1");
	}
	return 0;
}*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
ll n;
int main(){
	cin >> n;
	if (n & 1 == 0){
		cout << -1;
		return 0;
	}
	ll res = 3;
	for (int i = 1;i<=10000000;i++){
		if (res % n == 0){
			cout << i;
			return 0;
		}
		res=(res*10+3)%n;
	}
	cout << -1;
	return 0;
}
