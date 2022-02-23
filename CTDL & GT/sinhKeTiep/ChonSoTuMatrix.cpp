#include <bits/stdc++.h>
using namespace std;

int stop = 0, arr[11], n, k, res = 0;
int matrix[11][11], result[101][101], m = 1;

void test() {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += matrix[i][arr[i]];
    if (sum == k) {
        res++;
        for (int i = 1; i <= n; i++)
            result[m][i] = arr[i];
        m++;
    }
}

void sinhkt() {
    int i = n - 1, j, t;
    while (arr[i] > arr[i+1])
        i--;
    if (i == 0)
        stop = 1;
    else {
        j = n;
        while (arr[j] < arr[i])
            j--;
        t = arr[i]; arr[i] = arr[j]; arr[j] = t;

        int d = i + 1, c = n;
        while (d < c) {
            t = arr[d]; arr[d] = arr[c]; arr[c] = t;
            d++; c--;
        }
    }
}

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        arr[i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> matrix[i][j];
    stop = 0;
    while (!stop) {
        test();
        sinhkt();
    }

    cout << res << endl;

    for (int i1 = 1; i1 < m; i1++) {
        for (int i2 = 1; i2 <= n; i2++) {
            cout << result[i1][i2] << " ";
        }
        cout << endl;
    }

    return 0;
}
