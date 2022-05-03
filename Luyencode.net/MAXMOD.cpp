#include <bits/stdc++.h>
using namespace std;
 
int maxModValue(int arr[], int n){
    int ans = 0;
    sort(arr, arr + n);
    for (int j = n - 2; j >= 0; --j) {
        if (ans >= arr[j])
            break;
        if (arr[j] == arr[j + 1])
            continue;
        for (int i = 2 * arr[j]; i <= arr[n - 1] + arr[j]; i += arr[j]) {
            int ind = lower_bound(arr, arr + n, i) - arr;
            ans = max(ans, arr[ind - 1] % arr[j]);
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << maxModValue(arr, n);
}
//geekforgeeks
