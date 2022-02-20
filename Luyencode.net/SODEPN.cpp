#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	while(n>0){
		int t=n%10;
		n/=10;
		sum=sum+t;
	}
	if(sum%10==9) cout<<"YES";
	else cout<<"NO";
	return 0;
}
