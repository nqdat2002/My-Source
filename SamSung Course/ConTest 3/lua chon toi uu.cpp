#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
int a[100005] , b[100005], c[100005];
int n;
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		cin >> a[i] >> b[i];
	}
}
void QSort(int l, int r, int a[], int b[]){
	int m = (b[l] + b[r])/2;
	int i = l, j = r;
	while(i <= j){
		while(b[i] < m) i++;
		while(m < b[j]) j --;
		if(i <= j){
			swap(b[i], b[j]);
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if(l < j) QSort(l, j, a, b);
	if(i < r) QSort(i, r, a, b);
}
void Solve(){
	int m = 1;
	c[m] = 1;
	int r = b[m];
	for(int i = 2; i <= n; i ++){
		if(r <= a[i]){
			c[m++] = i;
			r = b[i];
		}
	}
	cout << m << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		inp();
		QSort(1, n, a, b);
		Solve();
	}
	return 0;
}

