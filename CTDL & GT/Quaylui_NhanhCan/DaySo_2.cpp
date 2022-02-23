#include <bits/stdc++.h>
using namespace std;

int res[11][11];

void triangle(int n, int arr[]) {
    int row = n - 1;
    while (row > 0) {
        for (int i = 1; i <= row; i++)
            arr[i] = arr[i] + arr[i+1];

        for (int i = 1; i <= row; i++)
            res[row][i] = arr[i];

        row--;
    }
}

void printContinue(int n) {
    int row = 1;
    while (row < n) {
        cout << "[";

        for (int i = 1; i <= row; i++)
            if (i == row)
                cout << res[row][i];
            else 
                cout << res[row][i] << " ";

        cout << "]" << " ";
        row++;
    }
}

void printFirst(int n, int arr_dup[]) {
    cout << "[";
    for (int i = 1; i <= n; i++) {
        if (i == n)
            cout << arr_dup[i];
        else 
            cout << arr_dup[i] << " ";
    }
    cout << "]" << endl;
}

int main() {
    int test_count, n;
    cin >> test_count;
    while (test_count--) {
        cin >> n;
        int arr[n+1], arr_dup[n+1];
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        for (int i = 1; i <= n; i++)
            arr_dup[i] = arr[i];
        triangle(n, arr);
        printContinue(n);
        printFirst(n, arr_dup);
    }
    return 0;
}
