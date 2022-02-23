#include <bits/stdc++.h>
using namespace std;

bool check(int n, int arr[]) {
    int cp[n];
    copy(arr, arr + n, cp);
    sort(cp, cp + n);
    for (int i = 0 ; i < n; i++) {
        if (!(cp[i] == arr[i]) && !(cp[i] == arr[n - i - 1]))
            return false;
    }
    return true;
}

int main() {
    int test, n;
    cin >> test;
    while (test--) {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (check(n, arr))
            cout << "Yes" << "\n";
        else 
            cout << "No" << "\n";
    }
    return 0;
}
