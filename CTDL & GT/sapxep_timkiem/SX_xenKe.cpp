#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        stable_sort(arr, arr + n);
        
        if (n % 2 == 0) {
            for (int i = n - 1; i > n / 2 - 1; i--) {
                cout << arr[i] << " " << arr[n - i - 1] << " ";
            }
            cout << endl;
        }

        else {
            for (int i = n - 1; i > n / 2 - 1; i--) {
                if (i == n / 2)
                    cout << arr[i];
                else 
                    cout << arr[i] << " " << arr[n - i - 1] << " ";

            }
            cout << endl;
        }
    }
    return 0;
}
