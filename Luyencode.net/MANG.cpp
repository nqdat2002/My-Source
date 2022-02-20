#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int a[],int n){
	int S=0;
	for(int i=0;i<n;i++){
		S+=a[i];
	}
	return S;
}
int schan(int a[],int n){
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) c++;
	}
	return c;
}
void soduong(int a[],int n){
	int mark=0;
	for(int i=n-1;i>=0;i--){
		if(a[i]>0){
			mark=1;
			cout << a[i];
			break;
		}
	}
	if(mark==0) cout << "0";
}
int main(){
	int n,a[1005];
	cin >> n;
	for(int i=0;i<n;i++)
		cin >> a[i];
	cout << sum(a,n) << ' ' << schan(a,n) << ' ';
	soduong(a,n);
	return 0;
}