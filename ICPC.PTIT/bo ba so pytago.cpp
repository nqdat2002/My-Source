#include<bits/stdc++.h>
using namespace std;
bool Is_triangle(long long int arr[], int n){
	sort(arr, arr + n );
    for (int i = 0 ; i < n ; i ++)
      arr[i] = arr[i] * arr[i];
    for (int i = n - 1 ; i >= 2 ; i --) {
        int left = 0; 
        int right = i - 1; 
        while (left < right) {
            if (arr[left] + arr[right] == arr[i])
                return true;
            (arr[left] + arr[right] < arr[i]) ? left++ : right--;
        }
    }
    return false;
}
int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n ;
		long long arr[5005];
		for(int i = 0 ; i < n ; i ++){
			cin >> arr[i];
		}
		if(Is_triangle(arr, n))
			cout << "YES";
		else
			cout << "NO";
		cout << endl;	
	}
	return 0;

}

