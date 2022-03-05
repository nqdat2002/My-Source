#include <bits/stdc++.h>
using namespace std;
int a[100], n;
bool ok;

bool kiemtra(){ // kiem tra tinh thuan nghich cua mang
	for(int i = 1; i <= n; i ++){
		if(a[i] != a[n - i + 1])
			return false;
	}
	return true;
}

void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i] << " ";
	cout << endl;
}
void sinhketiep(){
	int i = n;
	// kiem tra tu duoi len
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = true; // cau hinh cuoi cung
	else a[i] = 1;
}
int main(){
	cin >> n;
	ok = false;
	for(int i = 1; i <= n; i ++) a[i] = 0; // thiet lap cau hinh dau tien
	while(!ok){
		if(kiemtra())
			in();
		sinhketiep();
	}
	return 0;
}
