#include<bits/stdc++.h>
using namespace std;
int Is_prime(int x){
	if(x < 2)
		return 0;
	for(int i = 2; i <= sqrt(x); i ++)
		if(x % i == 0)
			return 0;
	return 1;
}
int Sum(int n){
	int a = 0, sum = 0,b = 0;
	while(n){
		int i = n % 10;
		b ++;
		if(Is_prime(i) && i >= 2)
			a ++;
		sum = sum + i;
		n /= 10;
	}
	if(a == b && Is_prime(sum))
		return 1;
	return 0;
}
int main(){
	int t, a, b, cnt;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		cnt = 0;
		for(int j = a; j <= b; j ++){
			if(Sum(j) && Is_prime(j))
			cnt ++;
		}
		cout << cnt << endl;
	}
	return 0;
}
