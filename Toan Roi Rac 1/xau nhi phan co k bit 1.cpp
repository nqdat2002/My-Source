#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100];
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n){
			int cnt = 0;
			for(int l = 1; l <= n - 1; l++)
				if(a[l] == 1)
					cnt += 1;
			if(cnt == k){
				for(int l = 1; l <= n; l++)
					cout << a[l];
				cout << endl;
			}
		}
		else Try(i + 1);
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
	}
	return 0;
}

