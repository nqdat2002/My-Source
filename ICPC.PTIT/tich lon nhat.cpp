#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	int a[t];
	for(int i = 0; i < t; i ++)
		cin >> a[i]; 
	sort(a, a + t);
	cout << max(a[0] * a[1], max(a[0] * a[1] * a[t - 1], max(a[t - 1] * a[t - 2] * a[t - 3], a[t - 1] * a[t - 2])));
	cout << endl;	 
}
