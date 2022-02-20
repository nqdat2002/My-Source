#include<bits/stdc++.h>
using namespace std;
#define run1 int t; cin >> t;
#define run2 int t; cin >> t; cin.ignore();
void FileIO(){
	freopen("input.txt","r", stdin);
	freopen("output.txt","w",stdout);
}
int n, k, a[100005], cnt = 0;
void Solve(){
	cin >> n >> k;
	for(int i = 1; i <= n; i ++)
		cin >> a[i];
	cnt = 0;
	sort(a + 1, a + n + 1);
	for(int i = 1; i <= n - 1; i ++){
		if(a[i + 1] - a[i] > k)
			cnt ++;
	}
	cout << cnt + 1 << endl;
}
int main(){
//	int t; cin >> t;
//	while(t--){
	   Solve();
//	}
	return 0;
}

