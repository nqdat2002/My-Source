#include <iostream>
using namespace std;
int n,k,a[100];
bool check(){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1) dem++;
	}
	if (dem==k) return true;
	else return false; 
}
void xuat(){
	if(check()==true){
		for(int j=1;j<=n;j++){
			cout<<a[j];
		}
		cout<<endl;
	}
}
void back(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n) xuat();
		else back(i+1);
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		back(1);
		cout<<endl;
	}
	return 0;
}
