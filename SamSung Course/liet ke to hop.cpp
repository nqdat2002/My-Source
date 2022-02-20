#include <bits/stdc++.h>
using namespace std;
int arr[100],n,k;
void output(){
	for(int i = 1; i <= k; i ++)
		cout << arr[i];	
	cout << " ";
}
void backtracking(int i){
	for(int j = arr[i-1] + 1; j <= n - k + i; j ++ ){
		arr[i] = j;
		if(i == k) 
			output();
		else 
			backtracking(i + 1);
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		backtracking(1);
		cout << endl;
	}
	return 0;
}
