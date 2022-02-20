#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int nt(int n){
	if(n<2)
 	return 0;
 	for (int i=2;i<=sqrt(n);i++)
	 	{
		 if(n%i==0) return 0;
		}
	return 1; 
}
int dem(int n){
	int x=0;
	while(n>0){
		int i=n%10;
		n/=10;
		x++;
	}
	return x;
}
bool check(int n){
	int x=0;
	int m=n;
	while(n>0){
		if(nt(n)){
			x++;
		}
		n/=10;
	}
	if(x==dem(m)) return true;
	else return false;
}

int main(){
	int n,ma=0;
	cin >> n;
	for(int i=2;i<=n;i++){
		if(check(i)==true){
			ma++;
			cout << i <<" ";
		}
	}
	if(ma==0) cout <<-1;
	return 0;
}

