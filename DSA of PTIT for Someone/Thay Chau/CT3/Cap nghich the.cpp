#include <bits/stdc++.h>
using namespace std;

long long _mergeSort(long long arr[], long long temp[], long long left, long long right);
long long merge(long long arr[], long long temp[], long long left, long long mid, long long right);

long long mergeSort(long long arr[], long long array_size) {
    long long temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

long long _mergeSort(long long arr[], long long temp[], long long left, long long right) {
    long long mid, inverse_count = 0;
    if (right > left) {
        // Chia ra thanh 2 phan, goi ham _mergeSort cho moi phan
        mid = (right + left) / 2;

        // Tinh tong cap nghich the o ben trai va phai
        inverse_count += _mergeSort(arr, temp, left, mid);
        inverse_count += _mergeSort(arr, temp, mid + 1, right);

        // Gop 2 phan
        inverse_count += merge(arr, temp, left, mid + 1, right);
    }
    return inverse_count;
}

long long merge(long long arr[], long long temp[], long long left, long long mid, long long right) {
    long long i, j, k;
    long long inverse_count = 0;

    i = left;
    j = mid;
    k = left;
    
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inverse_count = inverse_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];
    
    while (j <= right)
        temp[k++] = arr[j++];
    
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inverse_count;
}

int main() {
    int test;
    long long n;
    cin >> test;
    while (test--) {
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
            cin >> arr[i];
        long long ans = mergeSort(arr, n);
        cout << ans << endl;
    }
    return 0;
}
