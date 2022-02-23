#include <bits/stdc++.h>
using namespace std;

void pairsort(int arr1[], int arr2[], int n) {
    pair<int, int> pair_array[n];

    for (int i = 0; i < n; i++) {
        pair_array[i].first = arr2[i];
        pair_array[i].second = arr1[i];
    }

    sort(pair_array, pair_array + n);

    for (int i = 0; i < n; i ++) {
        arr2[i] = pair_array[i].first;
        arr1[i] = pair_array[i].second;
    }
}

int result(int arr1[], int arr2[], int n) {
    int i, j, count = 1;
    i = 0;
    for (j = 1; j < n; j++) {
        if (arr1[j] >= arr2[i]) {
            count++;
            i = j;
        }
    }
    return count;
}

int main() {
    int n, test, count;
    cin >> test;
    while (test--) {
        cin >> n;
        int arr1[n], arr2[n];

        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];

        pairsort(arr1, arr2, n);
        
        cout << result(arr1, arr2, n) << endl;
    } 
    return 0;
}
