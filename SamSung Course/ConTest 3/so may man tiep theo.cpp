#include <bits/stdc++.h>
using namespace std;
int n, a[100];
int b[2] = {4 , 7};
vector <long> res;
void in(){
	int tmp = 0;
	for(int i = 1; i <= n; i ++){
		tmp = tmp * 10 + b[a[i]];
	}
	res.push_back(tmp);
}
void Try(int i){
	int j;
	for(int j = 0; j <= 1; j ++){
		a[i] = j;
		if(i == n) in();
		else Try(i + 1);
	}
}
int main(){
	for(n = 1; n <= 9; n ++)
		Try(1);
//	for(int m = 0; m < res.size(); m++) cout << res[m] << endl;
//	cout << res.size() << endl;
	long long x, y, sum = 0;
	cin >> x >> y;
	int m = 0;
	while(x <= y){
		if(x <= res[m] && y <= res[m]){
			sum = sum + (y - x + 1) * res[m];
			x = res[m] + 1;
		}
		if(x <= res[m] && y >= res[m]){
			sum = sum + (res[m] - x + 1) * res[m];
			x = res[m] + 1;
		}
		else
			m = m + 1;
	}
	cout << sum << endl;
	return 0;
}


