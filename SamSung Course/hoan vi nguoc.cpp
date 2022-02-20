#include <bits/stdc++.h>
using namespace std;
int arr[100], n, k,Istrue[100]={};
void output(){
	for(int i = n; i >= 1; i --){
		cout << arr[i] ;	
	}
	cout << " ";
}
void backtracking(int i){
	for(int j = n; j >= 1 ; j --){
		if(Istrue[j] == 0){
			Istrue[j] = 1;
			arr[i] = j;
			if(i == 1) output();
			else backtracking(i - 1);
			Istrue[j] = 0;
		}	
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n ;
		backtracking(n);
		cout << endl;
	}
	return 0;
}
