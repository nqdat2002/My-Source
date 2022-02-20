#include<bits/stdc++.h>
using namespace std;
int main(){
	int a, b; cin >> a >> b;
	int cnt = 0, arr[1000005];
	memset(arr, 0, sizeof(arr));
	for(int i = 1; i <= b; i ++)
		for(int j = 2 * i; j <= b; j += i)
			arr[j] += i;
	for(int i = a; i <= b; i ++)
		if(arr[i] > i)
			cnt ++;
	cout << cnt;
	return 0;
}

