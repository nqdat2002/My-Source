#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    int arr[100005];
    for (int i = 0; i < n; ++i) cin >> arr[i];
    sort(arr, arr + n);
    int d = arr[n - 1], cnt = 1;
    for (int i = n-2; i >= 0; --i) {
        if (d > 0) {
            ++cnt;
           	d = min(d - 1, arr[i]);
        }
        else break;
    }
    cout << (cnt == 99999 ? cnt + 1 : cnt);
}
