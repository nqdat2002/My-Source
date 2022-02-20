#include<bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	cin >> a >> b;
	int dem=0;
	int a_length=a.size(),b_length=b.size();
	int i=1, j=1;
	while (i<=b_length) {
	if(a[a_length-j]==b[b_length-i]){
		dem++;
		i++;
		j++;
	}
	else {
		i-=(dem-1);
		j=1;
		dem=0;
		}
	}
	for (int i=dem;i<b_length;i++) {
		a+=b[i];
	}
	cout << a;
	return 0;
}
