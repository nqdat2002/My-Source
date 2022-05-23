#include<bits/stdc++.h>
using namespace std;
long Count_Number(int arr2[], int m, int tmp[], int k){
	if(k == 0) 
		return 0;
	if(k == 1) 
		return tmp[0];
	int x = upper_bound(arr2, arr2 + m, k) - arr2;
	long res = m - x;
	res = res + tmp[0] + tmp[1];
	if(k == 2) 
		res = res - (tmp[3] + tmp[4]);
	if(k == 3)
		res = res + tmp[2];
	return res;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int arr[n], arr2[m];
		int tmp[10] = {0};
		for(int i = 0; i < n; i ++){
			cin >> arr[i];
		}
		for(int j = 0; j < m; j ++){
			cin >> arr2[j];
			if( arr2[j] < 5)
				tmp[arr2[j]] ++;
		}
		sort(arr2, arr2 + m);
		long ans = 0;
		for(int i = 0; i < n; i++)
			ans += Count_Number(arr2, m, tmp, arr[i]);
		cout << ans;
		cout << endl;
	}
	return 0;
}
