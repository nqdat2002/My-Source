#include <bits/stdc++.h>
using namespace std;

void result(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        
        else if (arr1[i] > arr2[j])
            cout << arr2[j++] << " ";
        
        else {
            cout << arr1[i++] << " ";
            j++;
        }
    }

    while (i < n)
        cout << arr1[i++] << " ";

    while (j < m)
        cout << arr2[j++] << " ";
    
    cout << endl;

    i = 0, j = 0;

    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            i++;

        else if (arr1[i] > arr2[j])
            j++;

        else {
            cout << arr1[i++] << " ";
            j++;
        }
    }
    cout << endl;
}

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        int arr1[n], arr2[m];

        for (int i = 0; i < n; i++)
            cin >> arr1[i];

        for (int j = 0; j < m; j++)
            cin >> arr2[j];
		sort(arr1,arr1+n);
		sort(arr2,arr2+m); 
        result(arr1, arr2, n, m);
    }
    return 0;
}
