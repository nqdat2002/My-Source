#include <bits/stdc++.h>
using namespace std;
int a[10], b[10], n, k, cnt;
bool ok;
void khoitao(){
	cin >> n >> k;
	for(int i = 1; i <= k; i ++){
		cin >> b[i];
		a[i] = i;
	}
	ok = false;
	cnt = 1;
}
bool ktra(){
	for(int i = 1; i <= k; i ++)
		if(a[i] != b[i])
			return false;
	return true;
}

void sinhketiep(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i) --i;
	if(i == 0)
		ok = true;
	else{
		a[i] ++;
		for(int j = i + 1; j <= k; j ++) a[j] = a[j - 1] + 1;
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
