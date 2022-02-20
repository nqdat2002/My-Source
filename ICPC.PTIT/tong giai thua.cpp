#include <bits/stdc++.h>
using namespace std;
unsigned long long gt(int n){
	unsigned long long res = 1;
	for(int i = 1; i <= n; i ++){
		res = res * i;
	}
	return res;
}
int main(){
	unsigned long long sum=0;
	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++){
		sum = sum + gt(i);
	}
	cout << sum;
	return 0;
}
