#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
bool ok;
void in(){
	for(int i = 1; i <= n; i ++) cout << a[i];
	cout << " ";
}
void sinhketiep(){
	int i = n - 1;
	// duyet tu cuoi duyet nen, tim vi tri dau tien ma a[i] < a[i + 1]
	while(i >= 1 && a[i] > a[i + 1])
		--i;
	if(i == 0) // la cau hinh cuoi cung
		ok = true;
	else{
		int j = n;
		while(a[i] > a[j]) 
			j--;    // tim` vi. tri' j dau tien > a[i] hien tai.
		swap(a[i], a[j]); 		// doi? cho~ 2  vi. tri do' cho nhau
		int d = i + 1, c = n;
		while(d <= c){           // lat. nguoc. doan. tu i + 1 -> n;
			swap(a[d], a[c]);
			d ++;
			c--;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ok = false;
		for(int i = 1; i <= n; i ++) a[i] = i;
		while(!ok){
			in();
			sinhketiep();
		}
		cout << endl;
	}
	return 0;
}
