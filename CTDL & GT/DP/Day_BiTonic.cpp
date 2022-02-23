#include <bits/stdc++.h>
using namespace std;

int n, arr[105];
int maxSumLeft[105], maxSumRight[105];

int result() {
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[i] && maxSumLeft[j] + arr[i] > maxSumLeft[i])
                maxSumLeft[i] = maxSumLeft[j] + arr[i];
        }
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            if (arr[i] > arr[j] && maxSumRight[j] + arr[i] > maxSumRight[i])
                maxSumRight[i] = maxSumRight[j] + arr[i];
        }
    }

    int res = INT_MIN;
    for (int i = 1; i <= n; i++)
        res = max(res, maxSumLeft[i] + maxSumRight[i] - arr[i]);

    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            maxSumLeft[i] = arr[i];
            maxSumRight[i] = arr[i];
        }

        cout << result() << endl;
    }
    return 0;
}
