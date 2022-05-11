#include <bits/stdc++.h>
using namespace std;
int n, k, c[1000];
bool ok;
void in(){
	for(int i = 1; i <= k; i ++) cout << c[i];
	cout << " ";
}
void sinhketiep(){
	int i = k;
	// duyet tu cuoi duyet nen, neu c[i] == n - k + i thi giam i
	while(i >= 1 && c[i] == n - k + i){
		--i;
	}
	if(i == 0) // la cau hinh cuoi cung
		ok = true;
	else{
		c[i] ++;
		// tang vi tri hien tai. Cac vi tri con lai = vi tri truoc + 1;
		for(int j = i + 1; j <= k; j ++) c[j] = c[j - 1] + 1;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i ++) c[i] = i;  // khoi tao cau hinh dau tien
		ok = false;
		while(!ok){
			in(); // in ra cau hinh hien tai
			sinhketiep(); // sinh cau hinh tiep theo
		}
		cout << endl;
	}
	return 0;
}
