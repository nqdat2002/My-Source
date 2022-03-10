#include <bits/stdc++.h>
using namespace std;
bool col[25], dwn[25], ops[25];
int a[100];
int n, k, cnt;
void Try(int i){
	for(int j = 1; j <= n; j ++){
		if(col[j] && dwn[i - j + n] && ops[i + j - 1]){
			a[i] = j;
			col[j] = false;
			dwn[i - j + n] = false;
			ops[i + j - 1] = false;
			if(i == n) 
				cnt++;
			else 
				Try(i + 1);
			col[j] = true;
			dwn[i - j + n] = true;
			ops[i + j - 1] = true;
		}
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n;
		cnt = 0;
		memset(col, true, sizeof(col));
		memset(dwn, true, sizeof(dwn));
		memset(ops, true, sizeof(ops));
		Try(1);
		cout << cnt << endl;
	}
	return 0;
}
