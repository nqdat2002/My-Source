#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
int b[100];
int cnt = 0; 
bool ktra(){
	for(int i = 2; i <= k; i++)
		if(a[b[i]] < a[b[i - 1]]) 
			return false; 
	return true; 
} 

void Try(int i){
	for(int j = b[i - 1] + 1; j <= n - k + i; j++){
		b[i] = j;
		if(i == k){
			 if(ktra()) 
			 	cnt++; 
		}
		else Try(i + 1);
	} 
} 
int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	b[0] = 0;
	Try(1);
	cout << cnt << endl;
	return 0;
}
