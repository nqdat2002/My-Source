#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
void inp(){
	cin >> n >> k;
	for(int i = 1; i <= k; i ++) a[i] = i;
}
void outp(){
	for(int i = 1; i <= k; i ++)
		cout << a[i] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k) outp();
		else Try(i + 1);
	}
}
int main(){
	inp();
	if(n == 1 && k == 1) cout << 1;
	else
		Try(1);
}