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
void before(){
	int i = k - 1;
	while(i >= 1 && a[i] == a[i + 1] - 1)
		i --;
	if(i == 0 && a[1] == 1){
		for(int j = 1; j <= k; j ++)
			a[j] = n - k + j;
	}	
	else{
		a[1 + i] -= 1;
		for(int j = i + 2; j <= k; j ++)
			a[j] = n - k + j;
	} 

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
		before();	
		xuat();	
	}
	return 0; 
}

