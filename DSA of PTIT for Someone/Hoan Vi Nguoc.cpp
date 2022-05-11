#include <bits/stdc++.h>
using namespace std;
int n, a[1000];
bool xet[1000];
void in(){
	for(int i = 1; i <= n; i ++) cout << a[i];
	cout << " ";
}
// quay lui
void Try(int i){
	for(int j = n; j >= 1; j--){ // cac kha nang duoc chon
		if(!xet[j]){ // neu chua xet j thi chon j
			xet[j] = true;	// danh' dau da~ xet
			a[i] = j;         // gan a[i] = j;
			if(i == n) in();  // neu i == n thi in ra cau hinh
			else Try(i + 1);  // khong thi tiep tuc voi vi tri tiep theo
			xet[j] = false;  // danh dau lai. chua xet.
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		memset(xet, false, sizeof(xet));
		cin >> n;
		Try(1);
		cout << endl;
	}
	return 0;
}
