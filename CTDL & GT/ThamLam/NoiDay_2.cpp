#include <bits/stdc++.h>
using namespace std;
#define MODULO 1000000007

long long result(long long arr[], long long n) {
    priority_queue<long long, vector<long long>,
                greater<long long> > hehe(arr, arr + n);

    long long res = 0;

    while (hehe.size() > 1) {
        long long first = hehe.top();
        hehe.pop();
        long long second = hehe.top();
        hehe.pop();

        res %= MODULO;
        res += (first % MODULO + second % MODULO) % MODULO;
        res %= MODULO;
        hehe.push((first % MODULO + second % MODULO) % MODULO);
    }

    return res;
}

int main() {
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << result(arr, n) << endl;

    return 0;
}
