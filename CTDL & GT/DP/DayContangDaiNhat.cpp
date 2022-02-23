#include <bits/stdc++.h>
using namespace std;
int c[1001];
int Count_Array(int a[],int n){
	int temp = 1;
	for(int i = 0; i < n; i ++){
		c[i] = 1;
		for(int j = 0; j < i; j ++){
			if(a[j] < a[i]){
				c[i] = max(c[i], c[j] + 1);
			}
		}
		temp = max(temp, c[i]);
	}
	return temp;
}
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0; i < n; i ++){
			cin >> arr[i];
		}
		cout << Count_Array(arr, n) << endl;
	}
	return 0;
}
