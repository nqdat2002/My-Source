#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
void solve(long long n){
	long i,cnt=0;
	for(i=1;i<sqrt(n);i++){
		if(n%i==0){
			if(i%2==0) 
				cnt++;
			if((n/i)%2==0) 
				cnt++;
		}
	}
	if(n/(long)(sqrt(n))==sqrt(n)){
		if(n/(long)(sqrt(n))%2==0)
			cnt++;
	}
	cout << cnt << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
	/*	long long i,j,a,b,d;
		cin >> a;
		b=0,d=0;
		int mark=0;
		if(a%2!=0)
			cout << mark << endl;
		else{
			for(j=2; j <= sqrt(2*a); j+=2){
				if(a%j==0)
					b++;
				int c=(int)sqrt(2*a);
				if(c*c==2*a)
					cout << 2*b+1 << endl;
				else
					cout << 2*b << endl;
			}
		}
	*/
		long long n;
		cin >> n;
		solve(n);
	}
	return 0;
}
