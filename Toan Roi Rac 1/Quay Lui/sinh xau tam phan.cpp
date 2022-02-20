#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void outp(){
	for(int i = 1; i <= n; i ++)
		cout << a[i];
	cout << endl;
}
void Try(int i){
	for(int j = 0; j <= 2; j ++){
		a[i] = j;
		if(i == n) outp();
		else Try(i + 1);
	}
}
int main(){
	cin >> n;
	Try(1);
	return 0;
}