#include <bits/stdc++.h>
using namespace std;
int tc(int n){
	int t;
	t=n%10;
	return t;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p,c;
		cin>>n;
		int m=n;
		if(n<38) cout<<n<<'\n';
		else if(n>=38&&n%5==0) cout<<n<<'\n';
		else if(n>=38){
			p=n%5;
			if(tc(n)>=3&&tc(n)<5) cout<<m-tc(n)+5<<'\n';
			else if(tc(n)>5&&tc(n)<=7||tc(n)<3) cout<<n<<'\n';
			else if(tc(n)>7&&tc(n)<=9) cout<<m-p+5<<'\n';
		}
	}
	return 0;
}
