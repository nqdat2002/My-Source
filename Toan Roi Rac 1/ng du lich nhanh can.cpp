#include <bits/stdc++.h>
using namespace std;
#define v 1e6
int ck[100];
int n;
long c[20][20], x[100], s = 0, res = 1e7, cmin = 1e7, xres[100];
void FileIO(){
	freopen("input2.txt", "r", stdin);
	freopen("output2.txt", "w", stdout);
}
void inp(){
	cin >> n;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			cin >> c[i][j];
			if(i != j)
				cmin = min(cmin, c[i][j]);
		}
	}
}
void Try(int i){
	if(s + cmin * (n - i + 1) >= res) {
		cout << endl;
		return;
	}
	for(int j = 1; j <= n; j ++){
		if(ck[j]){
			x[i] = j;
			ck[j] = 0;
			s += c[x[i - 1]][j];
			cout << "Delta = " << s << endl;
			cout << "Gk = " << s + cmin * (n - i + 1) << endl;
			if(i == n){
				if(s + c[x[n]][x[1]] < res)
					res = s + c[x[n]][x[1]];
				for(int i = 1; i <= n; i ++)
                    xres[i] = x[i];
               	for(int i = 1; i <= n; i ++)
               		cout << xres[i];
               	cout << endl;
               	cout << "DELTA = " << s + c[x[n]][x[1]] << endl;
               	cout << "FOPT = " <<  res << endl;
               	cout << endl;
			}
			else Try(i + 1);
			s -= c[x[i - 1]][j];
			ck[j] = 1;
		}

	}
}
int main(){
	memset(ck, 1, sizeof(ck));
	memset(xres, 0, sizeof(xres));
	memset(x, 0, sizeof(x));
	ck[1] = 0;
	x[1] = 1;
	inp();
	Try(2);
	cout << endl;
	cout << cmin << endl;
	cout << res << endl;
	for(int i = 1; i <= n; i ++)
		cout << xres[i] << " ";
	cout << endl;
	return 0;
}