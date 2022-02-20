#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[100], k = 3;
bool ok = false;
// ham kiem tra so nguyen to
bool Prime(int n){
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i ++)
		if(n % i == 0) 
			return false;
	return true;
}
// ham kiem tra tong K so lien tiep có phai so nguyen to hay khong
bool check(vector<int> &c, int n, int &k){
	int cnt = 0;
	for(int i = 0; i < n - k + 1; i ++){
		int sum = 0;
		for(int j = i; j < k + i && j < n; j ++){
			sum += c[j];
		}
		if(Prime(sum))
			cnt ++;
	}
	return (cnt == n - k + 1) ? true : false;
}
// in ra cau hinh thoa man dieu kien
void outp(){
	vector<int> c;
	for(int i = 1; i <= n; i ++) 
		c.push_back(b[a[i]]);
	if(check(c, n, k)){
		for(int i = 0; i < n; i ++)
			cout << c[i] << " ";
		cout << endl;
	}
}
// sinh cau hinh ke tiep
void next(){
	int i = n - 1;
	while(a[i] > a[i + 1]) 
		i--;
	if(i == 0) ok = true;
	else{
		int j = n;
		while(a[j] < a[i]) 
			j--;
		swap(a[i], a[j]);
		int d = i + 1, c = n;
		while(d < c){
			swap(a[d], a[c]);
			d ++;
			c --;
		}
	}
}
int main(){
	cin >> n;
	for(int i = 1; i <= n; i ++) 
		cin >> b[i];

	//khoi tao
	for(int i = 1; i <= n; i ++) 
		a[i] = i;
	while(!ok){
		outp();
		next();
	}
	return 0;
}