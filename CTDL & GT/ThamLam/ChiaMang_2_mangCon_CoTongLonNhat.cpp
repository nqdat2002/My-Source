#include <bits/stdc++.h>
using namespace std;

int max_diff(int n, int k, int arr[]) {
    int M, sum = 0, sum1 = 0, res = 0;

    for (int i = 0; i < n; i++)
        sum += arr[i];

    sort(arr, arr + n, greater<int>());
    M = max(k, n - k);

    for (int i = 0; i < M; i++)
        sum1 += arr[i];

    res = sum1 - (sum - sum1);

    return res;
}

int main() {
    int test, n, k;
    cin >> test;
    while (test--) {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << max_diff(n, k, arr) << "\n";
    }
    return 0;
}
