#include <bits/stdc++.h>
using namespace std;
char x; 
int n, a[100];
void outp(){
	for(int i = 1; i <= n; i ++)
		cout << char(a[i] + 'A');
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1]; j <= x - 'A'; j ++){
		a[i] = j;
		if(i == n) outp();
		else Try(i + 1);
	}
}
int main(){
	cin >> x >> n;
	a[0] = 0;
	Try(1);
	return 0;
}
