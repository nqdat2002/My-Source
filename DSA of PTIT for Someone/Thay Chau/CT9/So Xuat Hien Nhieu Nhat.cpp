#include <bits/stdc++.h> 
using namespace std; 
int main(){
	int t; cin >> t;
	while(t--){
		int n, a[100005], b[100005];
	    cin >> n;
	    for (int i=0; i<n; ++i) cin >> a[i];
	    int max1=a[0];
	    int min1=a[0];
	    for (int i=1; i<n; ++i) {
	    	if (max1<a[i]) max1=a[i];
	    	if (min1>a[i]) min1=a[i];
		}
		for (int i=min1; i<=max1; ++i) 
			b[i]=0;
		for (int i=0; i<n; ++i) 
			b[a[i]]+=1;
		
		int max2=0, z;
		for (int i=0; i<n; ++i) {
			if (max2<b[a[i]]) {
				max2=b[a[i]];
				z=a[i];
			}
		}
		if(max2 > n/2)
			cout << z;
		else cout << "NO";
		cout << endl;
	}
	return 0;
}
