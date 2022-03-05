#include <bits/stdc++.h>
using namespace std;
int a[100], n;
bool ok;
void in(){
	for(int i = 1; i <= n; i ++)
		cout << char(a[i] + 'A');   // 0 thi in ra A, 1 thi in ra 1 + 'A' = B
	cout << " ";
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
	int t; 
	cin >> t;
	while(t--){
		cin >> n;
		ok = false;
		for(int i = 1; i <= n; i ++) a[i] = 0; // thiet lap cau hinh dau tien
		while(!ok){
			in();
			sinhketiep();
		}
		cout << endl;
	}
	return 0;
}
