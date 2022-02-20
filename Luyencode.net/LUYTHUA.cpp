#include<iostream>
#define max 10000
using namespace std;
void nhap(int* x,int* n){
	cin>>*x>>*n;
}
void in(long long a[max]){
	int i,j;
	for(i=max-1;i>=0;i--){
		if(a[i]!=0) break;
	}
	for(j=i;j>=0;j--){
		cout<<a[j];
	}
}
void tinh(int x,int n){
	int i,j,z,du=0;
	long long k,a[max]={0};
	a[0]=1;
	if(n>=0){
		for(i=0;i<n;i++){
			for(j=0;j<max-1;j++){
				k=(a[j]*x+du)/10;
				if(a[j]*x+du>=10){
					a[j]=(a[j]*x+du)%10;
					du=k;	
				}
				else{
					a[j]=(a[j]*x+du)%10;
					du=0;
				}
			}
		}
		in(a);
	}
}
int main(){
	int x,n;
	nhap(&x,&n);
	tinh(x,n);
}

