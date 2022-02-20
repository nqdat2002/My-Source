#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool ok = false;
void outp(){
	for(int i = 1; i <= n; i ++) 
		cout << a[i] << " ";
	cout << endl;
}
void next(){
	int i = n - 1;
	while(a[i] > a[i + 1]) 
		i--;
	if(i == 0) ok = true;
	else{
		int j = n;
		while(a[j] < a[i]) 
			j--;
		swap(a[i], a[j]);
		int d = i + 1, c = n;
		while(d < c){
			swap(a[d], a[c]);
			d ++;
			c --;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i ++) a[i] = i;
	while(!ok){
		outp();
		next();
	}
	return 0;
}