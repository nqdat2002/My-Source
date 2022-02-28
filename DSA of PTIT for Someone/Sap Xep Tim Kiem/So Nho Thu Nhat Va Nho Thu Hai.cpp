#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; 
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n + 5];
		for(int i = 0; i < n; i ++) cin >> a[i];
		sort(a, a + n);
		if(a[0] == a[1]) 
			cout << "-1" << endl;
		else{
			cout << a[0] << " ";
			for(int i = 1; i < n; i ++){
				if(a[i] > a[0]){
					cout << a[i] << endl;
					break;
				}
			}
		}
	}
	return 0;
} 
