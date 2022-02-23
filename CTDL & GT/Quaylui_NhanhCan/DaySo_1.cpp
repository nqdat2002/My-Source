#include <iostream>
using namespace std;
int n,k,a[100];
void nhap(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
void xuat(){
	if(n==1)cout<<"["<<a[n]<<"]";
	else{
		cout<<"["<<a[1]<<" ";
		for(int j=2;j<n;j++){
			cout<<a[j]<<" ";
		}
		cout<<a[n]<<"]";
		cout<<endl;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		nhap();
		while(n>=1){
			xuat();
			for(int i=1;i<=n-1;i++){
				a[i]+=a[i+1];
			}
			n--;
		}
		cout<<endl;
	}
	return 0;
}
