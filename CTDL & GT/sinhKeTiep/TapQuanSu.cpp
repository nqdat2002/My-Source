#include <bits/stdc++.h>
using namespace std;

int main() {
    int test_count, n, k;
    cin >> test_count;
    while (test_count--) {
        cin >> n >> k;
        int arr[k+1], arr_check[k+1], dem = 0;
        for (int i = 1; i <= k; i++)
            cin >> arr[i];

        for (int i = 1; i <= k; i++)
            arr_check[i] = arr[i];

        int pos = k;

        while (arr[pos] == n - k + pos)
            pos--;
        
        if (arr[1] == n - k + 1) {
            cout << k << endl;
        }
        else {
            arr[pos]++;
            
            for (int j = pos + 1; j <= k; j++)
                arr[j] = arr[j-1] + 1;

            for (int i = 1; i <= k; i++)
                for (int j = 1; j <= k; j++)
                    if (arr[i] == arr_check[j])
                        dem++;

            cout << k - dem << endl;
        }
    }
    return 0;
}
