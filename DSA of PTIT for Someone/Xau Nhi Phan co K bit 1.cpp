#include <bits/stdc++.h>
using namespace std;
int a[100], n, k;
bool ok;

bool kiemtra(){ // kiem tra tinh thuan nghich cua mang
	int sum = 0;
	for(int i = 1; i <= n; i ++){
		sum += a[i];   // cong dong a[i] vao, neu == k thi true, khong thi false, hoac co the if(a[i] == 1) sum ++;
	}
	if(sum == k) return true;
	return false;
}

void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i];
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
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ok = false;
		for(int i = 1; i <= n; i ++) a[i] = 0; // thiet lap cau hinh dau tien
		while(!ok){
			if(kiemtra())
				in();
			sinhketiep();
		}
	}
	return 0;
}
