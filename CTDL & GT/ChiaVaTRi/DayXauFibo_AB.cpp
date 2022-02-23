#include <iostream>
using namespace std;
long long F[100];
void tao(){;
	F[1]=1;
	F[2]=1;
	for(int i=3;i<93;i++){
		F[i]=F[i-1]+F[i-2];
	}
}
char kq(int n,long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return kq(n-2,k);
	else return kq(n-1,k-F[n-2]);
	
}
int main(){
	tao();
	int t;cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		cout<<kq(n,k)<<endl;
	}
}
