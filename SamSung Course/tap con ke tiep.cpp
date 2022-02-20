#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;
int n, k;
int a[1000];
void init(){
	cin >> n >> k;
	for(int i = 1; i <= k; i++)
		cin >> a[i];
} 
void next(){
	int i = k;
	while(i > 0 && a[i] == n - k + i)
		i--;
	if(i > 0){
		a[i] += 1;
		for(int j = i + 1; j <= k; j ++)
			a[j] = a[i] + j - i;
	}
	else
		for(int j = 1; j <= k; j ++)
			a[j] = j;	
} 
void xuat(){
	for(int i = 1; i <= k; i ++)
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

