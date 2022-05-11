#include <bits/stdc++.h> 
#define R 1000000007 
using namespace std;
typedef vector<vector<long long> > M; 
int n,k; 
M nhan(M a,M b){
	M temp;
	temp.resize(n);
	for(int i=0;i<n;i++){
		temp[i].resize(n);
		for(int j=0;j<n;j++){
			temp[i][j]=0;
			for(int k=0;k<n;k++){
				temp[i][j]=(temp[i][j]%R+(a[i][k]%R)*(b[k][j]%R))%R; 
			} 
		} 
	} 
	return temp; 
} 

M power(M a, int k){
	if(k==1) return a;
	M x=power(a,k/2);
	if(k%2==0) return nhan(x,x);
	else return nhan(a,nhan(x,x)) ;
}
  
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k; 
		M a;
		a.resize(n); 
		for(int i=0;i<n;i++){
			a[i].resize(n); 
			for(int j=0;j<n;j++){
				cin>>a[i][j]; 
			}   
		}
		M kq=power(a,k);
		for(int i=0;i<n;i++){ 
			for(int j=0;j<n;j++){
				cout<<kq[i][j]<<" "; 
			}  
			cout<<endl; 
		}
	} 
}
