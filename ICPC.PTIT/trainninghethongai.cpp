#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		
		int n;
		double u, x = 1;
		cin >> n >> u;
		double a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a ,a + n);
		for(int i = 0; i < n - 1; i++) 
			if(a[i] < a[i + 1]) {
				if(u <= (i + 1) * (a[i + 1] - a[i])){
					for(int j = 0; j <= i; j++) a[j] += u / (i + 1);
					u = 0;
					break;
				} else {
					for(int j = 0; j < i; j++) a[j] = a[i + 1];
					u -= ((i + 1) * (a[i + 1] - a[i]));
					a[i] = a[i + 1];
					
				}
			}
		
		for(int i = 0; i < n; i++) {
			a[i] += (u / n);
		//	cout << a[i] << " ";
			x *= a[i];
		}
		printf("\n%.6lf\n",  x);
	}
	return 0;
}

