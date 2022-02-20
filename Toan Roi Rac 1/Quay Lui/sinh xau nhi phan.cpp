#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int n, a[100];
void outp(){
	for(int i = 1; i <= n; i ++)
		cout << a[i];
	cout << endl;
}
void Try(int i){
	int j;
	for(int j = 0; j <= 1; j ++){
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