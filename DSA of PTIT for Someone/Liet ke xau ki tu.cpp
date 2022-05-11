#include <bits/stdc++.h>
using namespace std;
char x;
int n, c[100];
void Try(int i){
	for(int j = c[i - 1]; j <= x - 'A'; j ++){
		c[i] = j;
		if(i == n){
			for(int k = 1; k <= n; k ++){
				cout << char(c[k] + 'A');
			}
			cout << endl;
		}
		else Try(i + 1);
	}
}
int main(){
	cin >> x >> n;
	c[0] = 0;
	Try(1);
}
