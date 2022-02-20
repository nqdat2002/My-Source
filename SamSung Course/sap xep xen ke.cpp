#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int index_min=0, index_max=n-1;
		for(int i=0;i<n;i++){
			if(i%2==0){
				cout << arr[index_max] << " ";
				index_max--;
			}
			else{
				cout << arr[index_min] << " ";
				index_min++;
			}
		}
		cout << endl;
	}
	return 0;
}

