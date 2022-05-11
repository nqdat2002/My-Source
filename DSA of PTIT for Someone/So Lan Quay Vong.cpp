#include <bits/stdc++.h>
using namespace std;

int vitri(int a[], int n){
	for(int i = 0; i < n - 1; i++){
		if(a[i] < a[i + 1])
			return i;
	}
	return 0;
}
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n; 
		cin >> n;
	    int a[n + 5];
	    for (int i = 0; i < n; i++) cin >> a[i];
	    cout << vitri(a, n) << endl;
	}
	return 0;
}
