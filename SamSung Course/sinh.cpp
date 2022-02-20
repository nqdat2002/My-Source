#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
// sinh xau nhi phan
/*----------------------------------
int a[50] = {0}, n;
bool ok = false;
void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i];
	cout << endl;
}
void sinhkt(){
	int i = n;
	while(a[i] == 1){
		a[i] = 0;
		i--;
	}
	if(i == 0) ok = true;
	else a[i] = 1;
}
int main(){
	cin >> n;
	while(!ok){
	   in();
	   sinhkt();
	}
	return 0;
}
--------------------------------------*/



// sinh to hop
/*------------------------------------
int c[50], n, k;
bool ok = false;
void khoitao(int k){
	for(int i = 1; i <= k; i ++){
		a[i] = i;
	}
}
void sinhkt(){
	int i = k;
	while(c[i] == n - k + i) i--;
	if(i == 0) ok = true;
	else{
		c[i] ++;
		for(int j = i + 1; j <= k; j ++){
			c[j] = c[i] + j - i;
		}
	}
}
void in(){
	for(int i = 1; i <= k; i ++) cout << c[i] << " ";
	cout << endl;
}
int main(){
	cin >> n >> k;
	khoitao(k);
	sinhtohop();
	in();
	return 0;
}
-----------------------------*/




/*
// sinh hoan vi
#include <bits/stdc++.h>
using namespace std;
int n, a[100];
bool ok = false;
void in(){
	for(int i = 1; i <= n; i ++) cout << a[i] << " ";
	cout << endl;
}
void sinh(){
	int i = n - 1;
	while(a[i] > a[i + 1]) i--;
	if(i == 0) ok = true;
	else{
		int j = n;
		while(a[j] < a[i]) j--;
		swap(a[i], a[j]);
		int d = i + 1, c = n;
		while(d < c){
			swap(a[d], a[c]);
			d ++;
			c --;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i ++) a[i] = i;
	while(!ok){
		in();
		sinh();
	}
	return 0;
}
*/


	




