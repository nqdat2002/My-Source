#include <bits/stdc++.h>
using namespace std;
void Bubble_Sort(int arr[], int n, int k) {
    for (int i = 0 ; i < n - 1 ; i ++) {
        for (int j = 0 ; j < n - i - 1; j ++) {
            if (abs(arr[j] - k) > abs(arr[j + 1] - k))
                swap(arr[j], arr[j + 1]);
        }
    }
}
int main() {
    int t, n, k;
    cin >> t;
    while (t--) { 
        cin >> n >> k;
        int arr[100005];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Bubble_Sort(arr, n, k);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
