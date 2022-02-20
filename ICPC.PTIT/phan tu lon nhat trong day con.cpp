#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
	int t;
	cin >> t; 
	while (t --) { 
		int n, k; 
		cin >> n >> k; 
		int arr[n]; 
		for(int &x:arr) cin >> x; 
		multiset <int> multiset; 
		for(int i = 0; i < k; i ++)
			multiset.insert(arr[i]); 
	
		for(int i = k; i < n; i ++){ 
			cout << *multiset.rbegin() << " "; 
			multiset.erase(multiset.find(arr[i - k])); 
			multiset.insert(arr[i]); 
		} 
		cout << *multiset.rbegin();
		cout << endl;
	} 
	return 0;
}

