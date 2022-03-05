#include <bits/stdc++.h>
using namespace std;
int a[30], n;
bool ok;
void khoitao(){
	cin >> n;
	for(int i = 1; i <= n; i ++) a[i] = 6;
	ok = false;
}
bool ktra(){
	for(int i = 1; i <= n; i ++){
		if(a[1] == 6 || a[n] == 8)
			return false;
		else if(a[i] == 8 && a[i + 1] == 8)
			return false;
		else if(a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6)
			return false; 
	}
	return true;
}
void sinhketiep(){
	int i = n;
	while(i >= 1 && a[i] == 8){
		a[i] = 6;
		--i;
	}
	if(i == 0) ok = true;
	else a[i] = 8;
}
void in(){
	for(int i = 1; i <= n; i ++) cout << a[i];
	cout << endl;
}
int main(){
	khoitao();	
	while(!ok){
		if(ktra())
			in();
		sinhketiep();
	}
	return 0;
}
