#include <bits/stdc++.h>
using namespace std;
int f[105];
struct capSo{
    int a;
    int b;
};
bool compare2Pair(capSo arr1, capSo arr2) {
    return arr1.a < arr2.a;
}
int result(capSo arr[], int n) {
    int res = INT_MIN;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (arr[i].a > arr[j].b && f[i] < f[j] + 1)
                f[i] = f[j] + 1;       
            res = max(res, f[i]);
        }
    }
    return f[n];
}
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        capSo(arr[n + 1]);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i].a >> arr[i].b;
            f[i] = 1;
        }
        sort(arr + 1, arr + n + 1, compare2Pair);
        cout << result(arr, n) << endl;
    }
    return 0;
}
