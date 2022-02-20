#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		long long m, s;
		cin >> s >> m;
		if(s == 0 || s > 9 * m){
			cout << "-1";
//			return 0;
		}
		else if(m == 1 && s == 0){
			cout << 0;
//			return 0;
		}
		else{
		long long arr[m + 1], arrr[m + 1];
		for(long long i = 0; i < m; i ++){
			if(s >= 10){
				arr[i] = 9;
				s -= 9;
			}
			else{
				arr[i] = s;
				s = 0;
			}
		}
		for(long long i = 0; i < m; i ++){
				arrr[i] = arr[i];
		}
		if(arrr[m - 1] == 0){
			arrr[m - 1] = 1;
			for(long long i = m - 2; i >= 0; i --){
				if(arrr[i] != 0){
					arrr[i] -= 1;
					break;
				}
			}
		}
		for(long long i = m - 1; i >= 0; i --)	
			cout << arrr[i];
			}
	//	cout << " ";
	//	for(long long i = 0 ; i < m ; i ++)	
	//		cout << arr[i];
		cout << endl;
	}
	return 0;
}
