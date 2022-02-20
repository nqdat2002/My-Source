#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool check[100] = {false};
void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i] << " ";
	cout << endl;
}
void Try(int i){
	int j;
	for(j = 1; j <= n; j ++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == n) in();
			else Try(i + 1);
			check[j] = false;
		}
	}
}
int main(){
	cin >> n;
	Try(1);
}