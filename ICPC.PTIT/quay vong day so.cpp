#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	while(t--){
		int arr[1000005];
		int n,j,d;
		cin >> n >> d;
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		for(int i=d;i<n;i++){
			cout << arr[i] << " ";
		}
		for(int i=0;i<d;i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

