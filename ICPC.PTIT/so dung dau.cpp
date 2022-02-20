#include <bits/stdc++.h>
using namespace std;
const int nmax = 1005;
int main(){ 
	int t; 
	cin >> t;
	while (t--) { 
		int n,j=0;
		cin >> n; 
		int a[nmax], b[nmax]; 
		for(int i=0;i<n;i++)
			cin >> a[i]; 
		int tmp = a[n - 1]; 
		for(int i = n - 1; i >= 0; i --){ 
			if(a[i] < a[i - 1]){ 
				b[j] = a[i - 1]; 
				j ++; 
			} 
			else
				swap(a[i],a[i - 1]);
		} 
		for(int i = j - 1; i >= 0; i --)
			cout << b[i] << " "; 		
		cout << tmp << endl; 
	} 
	return 0; 
}
