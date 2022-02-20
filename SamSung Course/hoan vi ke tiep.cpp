#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;
int n;
int a[1000];
void init(){
	cin >> n ;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
} 
void next(){
	int j = n - 1;
	while(j > 0 && a[j] > a[j + 1])
		j--; 
	if(j > 0){
		int k = n;
		while(a[j] > a[k]){
			k --; 
		}
		swap(a[j], a[k]);
		int r = j + 1; 
		int s = n; 
		while(r <= s){
			swap(a[r], a[s]);
			r ++;
			s --; 
		} 
	}
	else{
		for(int j = 1; j <= n; j ++)
			a[j] = j;
	}
}
void xuat(){
	for(int i = 1; i <= n; i ++)
		cout << a[i] << " ";
	cout << endl;
}
int main() { 
	int t; cin >> t;
	while(t--){ 
		init();
		next();	
		xuat();	
	}
	return 0; 
}
