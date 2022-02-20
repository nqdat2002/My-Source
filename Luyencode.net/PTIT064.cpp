#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, m, a[500005], b[500005], c[500005];
    cin >> n;
	for (int i=0; i<n; i++) {
    	cin >> a[i];
    }
    for (int i=0; i<n; i++) {
        cin >> b[i];
    }
	for (int i=0; i<n; i++) {
		c[i]=a[i];
	}
	for (int i=2*n-1; i>=0; i--) {
		if ((i-n)<0) {
			break;
		}
		c[i]=b[i-n];
	}
	sort(c,c+2*n);
	for (int i=0; i<2*n; i++) {
		cout << c[i] << " ";
	}
    return 0;
}
