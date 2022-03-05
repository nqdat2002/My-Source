#include <bits/stdc++.h> 
#define R 1000000007 
using namespace std;
void nhan(long long a[2][2], long long b[2][2]){
	long long x=a[0][0]*b[0][0]%R+a[0][1]*b[1][0]%R;
	long long y=a[0][0]*b[0][1]%R+a[0][1]*b[1][1]%R;
	long long z=a[1][0]*b[0][0]%R+a[1][1]*b[1][0]%R;
	long long t=a[1][0]*b[0][1]%R+a[1][1]*b[1][1]%R;
	a[0][0]=x;a[0][1]=y;a[1][0]=z;a[1][1]=t; 
} 
void power(long long a[2][2],long long n){
	if(n==0||n==1) return;
	long long b[2][2]={{1,1},{1,0}};
	power(a,n/2);
	nhan(a,a);
	if(n%2!=0) nhan(a,b); 
} 
long long fi(long long n){
	long long a[2][2]={{1,1},{1,0}};
	if(n==0) return 0;
	else if(n==1) return 1;
	else{
		power(a,n-1);
		return a[0][0]; 
	} 
} 
int main(){
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n; 
		cout<<fi(n)%R<<endl; 
	} 
}
