#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Max_Sum(int a[], int n){
	int res = -1e6;
	for(int i = 0; i < n; i ++){
		int sum = a[i];
		for(int j = i + 1; j < n; j ++){
			sum += a[j];
			res = max(res, sum);
		}
	}
	return res;
}

int main(){
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	int a[n];
    	for(auto &x: a) cin >> x;
    	cout << Max_Sum(a, n) << endl;
	}
	return 0;
}
