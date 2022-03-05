#include <bits/stdc++.h>
using namespace std;
int a[10], b[10], n, cnt;
bool ok;
void khoitao(){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> b[i];
		a[i] = i;
	}
	ok = false;
	cnt = 1;
}
bool ktra(){
	for(int i = 1; i <= n; i ++)
		if(a[i] != b[i])
			return false;
	return true;
}
void sinhketiep(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]) --i;
	if(i == 0)
		ok = true;
	else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		khoitao();	
		while(!ok){
			if(ktra()){
				cout << cnt << endl;
				break;
			}
			cnt++;
			sinhketiep();
		}
	}
	return 0;
}
