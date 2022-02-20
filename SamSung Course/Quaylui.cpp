#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
/*------------------------------------------
// quay lui: Sinh xau nhi phan
int n, a[100];
void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i];
	cout << endl;
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
	cin >> n;
	Try(1);
	return 0;
}
-----------------------------------------------*/


/*
// quay lui: Sinh to hop C(n, k)
int n, k, a[100];
void inp(){
	cin >> n >> k;
}
void in(){
	for(int i = 1; i <= k; i ++)
		cout << a[i] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j ++){
		a[i] = j;
		if(i == k) in();
		else Try(i + 1);
	}
}
int main(){
	inp();
	Try(1);
}

*/
/*-------------------------------------------
// quay lui: Sinh hoan vi cua n
int n, a[100];
bool check[100] = {false};
void in(){
	for(int i = 1; i <= n; i ++)
		cout << a[i] << " ";
	cout << endl;
}
void Try(int i){
	int j;
	for(j = 1; j <= n; j ++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == n) in();
			else Try(i + 1);
			check[j] = false;
		}
	}
}
int main(){
	cin >> n;
	Try(1);
}
---------------------------------------------*/




/*-----------------------------------------------
//quay lui: Sinh hoan vi xau ky tu
int n, a[100];
bool check[100] = {false};
string str;
void in(){
	for(int i = 1; i <= n; i ++)
		cout << str[a[i] - 1] ;
	cout << " ";
}
void Try(int i){
	int j;
	for(j = 1; j <= n; j ++){
		if(!check[j]){
			a[i] = j;
			check[j] = true;
			if(i == n) in();
			else Try(i + 1);
			check[j] = false;
		}
	}
}
int main(){
	int t; cin >> t; cin.ignore();
	while(t--){
		cin >> str;
		n = str.length();
		Try(1);
		cout << endl;
	}
	return 0;
}

------------------------------------------- */





/*------------------------------------------------------
// quay lui: Sap xep quan hau
int n, A[200], B[200] = {0}, mat[100][100];
int X[200] = {0}, N[200] = {0}, res = -999999;
void checkMax() {
    int sum = 0;
    for (int i = 1; i <= 8; i++)
        sum += mat[i][A[i]];
    if (sum > res)
        res = sum;
}
void Try(int i) {
    int j;
    for (j = 1; j <= 8; j++) {
        if (!B[j] && !X[i - j + 8] && !N[i + j - 1]) {
            A[i] = j;
            B[j] = 1;
            X[i - j + 8] = 1;
            N[i + j - 1] = 1;
            if (i == 8)
                checkMax();
            else Try(i + 1);
            B[j] = 0;
            X[i - j + 8] = 0;
            N[i + j - 1] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        res = -999999;
        for (int i = 1; i <= 8; i++)
            for (int j = 1; j <= 8; j++)
                cin >> mat[i][j];
        Try(1);
        cout << res << endl;
    }
    return 0;
}


---------------------------------------------------------*/


/*---------------------------------------------------------
// quay lui: Phan tich so
int n, a[11];
void out(int n){
	cout<< "(";
	for(int i = 1; i < n; i ++)
		cout << a[i] << " ";
	cout << a[n] << ") ";
}
void Try(int i, int k, int s){
	for(int j = k; j >= 1; j --){
		if(s + j <= n){
			a[i] = j;
			s += j;
			if(s == n) out(i);
			else Try(i + 1, j, s);
			s -= j;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		Try(1, n, 0);
		cout << endl;
	}
	return 0;
}
---------------------------------------------------*/




