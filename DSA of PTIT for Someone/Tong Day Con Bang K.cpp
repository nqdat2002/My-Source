#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], n, k, dem;
bool ok;
bool kiemtratong(){
	int sum = 0;
	for(int i = 1; i <= n; i ++)
		sum += b[i] * a[i];
	if(sum == k){
		dem ++;
		return true;
	}
	return false;
}
void in(){
	for(int i = 1; i <= n; i ++)
		if(b[i] == 1) cout << a[i] << " ";
	cout << endl;
}
void sinhketiep(){
	int i = n;
	while(i >= 1 && b[i] == 1){
		b[i] = 0;
		--i;
	}
	if(i == 0) ok = true;
	else b[i] = 1;
}
int main(){
	cin >> n >> k;
	ok = false;
	for(int i = 1; i <= n; i ++){ cin >> a[i]; b[0] = 0; }
	dem = 0;
	while(!ok){
		if(kiemtratong()) in();
		sinhketiep();
	}
	cout << dem << endl;
	return 0;
}
