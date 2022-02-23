#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

bool soSanh(Job a, Job b) {
    return (a.profit > b.profit);
}

void result(Job arr[], int n) {
    sort(arr, arr + n, soSanh);
    int count = 0, sum = 0;
    int result[n];
    bool slot[n];

    for (int i = 0; i < n; i++)
        slot[i] = false;

    for (int i = 0; i < n; i++) {
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--) {
            if (slot[j] == false) {
                count++;
                sum += arr[i].profit;
                slot[j] = true;
                break;
            }
        }
    }

    cout << count << " " << sum << endl;
}

int main() {
    int n, test, count;
    cin >> test;
    while (test--) {
        cin >> n;
        Job arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i].id >> arr[i].deadline >> arr[i].profit;
        }

        result(arr, n);
    } 
    return 0;
}
