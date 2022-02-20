#include <bits/stdc++.h>
using namespace std;
int c[50], n, k, P;
int a[100];
bool ok = false;
void Init(){
	cin >> n >> k >> P;
	for(int i = 1; i <= n; i ++) cin >> a[i];
	for(int i = 1; i <= k; i ++) c[i] = i;
}
void outp(){
	vector<int> b;
	int sum = 0;
	for(int i = 1; i <= k; i ++) {
		b.push_back(a[c[i]]);
		sum += a[c[i]];
	}
	if(sum == P){
		for(int i = 0; i < k; i ++)
			cout << b[i] << " ";
		cout << endl;
	}
}
void next(){
	int i = k;
	while(c[i] == n - k + i) 
		i --;
	if(i == 0) ok = true;
	else{
		c[i] ++;
		for(int j = i + 1; j <= k; j ++)
			c[j] = c[i] + j - i;
	}
}
int main(){
	Init();
	while(!ok){
		outp();
		next();
	}
	return 0;
}