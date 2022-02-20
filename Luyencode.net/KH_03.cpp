#include<bits/stdc++.h>
using namespace std;
void xoagiongnhau(int a[], int &n) {
	for (int i=0; i<n; i++) {
		int j=i+1;
	    while (j<n) {
		    if (a[i]==a[j]) {
		    	for (int k=j; k<n-1; k++) {
					a[k]=a[k+1];
				}
		    	n-=1;
		    }
		    else {
				j+=1;
			}
		}
   }
}
void xoaphantu(int a[], int &n, int position){
    if(n <= 0){
        return;
    }
    if(position < 0){
        position = 0;
    }
    else if(position >= n){
        position = n-1;
    }
    for(int i = position; i < n - 1; i++){
        a[i] = a[i+1];
    }
    --n;
}
void themphantu(int a[], int &n, int value, int pos) {
    if(pos < 0){
        pos = 0;
    }
    else if(pos > n){
        pos = n;
    }
    for(int i = n; i > pos; i--){
        a[i] = a[i-1];
    }
    a[pos] = value;
    ++n;
}
int main() {
	int n, a[1000];
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> a[i];
	}
	int m=n, b[1000];
	sort(a,a+n,greater<int>());
	copy(a,a+n,b);
	xoagiongnhau(a,n);
	bool z=false;
	for (int i=0; i<m-1; ++i) {
		if (abs(a[i]-a[i+1])<=1) {
			z=true;
			break;
		}
		else z=false;
	}
	if (!z) cout << 0;
	else {
		int max1=count(b,b+m,a[0]);
		for (int i=1; i<n; ++i) {
			if (max1<count(b,b+m,a[i])) {
				max1=count(b,b+m,a[i]);
			}
		}
		int max2=0;
		for (int i=0; i<n-1; ++i) {
			if (abs(a[i]-a[i+1])==1) {
				if (max2<count(b,b+m,a[i])+count(b,b+m,a[i+1])){
					max2=count(b,b+m,a[i])+count(b,b+m,a[i+1]);
				}
			}
		}
		int max;
		max = max1>max2 ? max1 : max2;
		cout << max;
	}
	return 0;
}