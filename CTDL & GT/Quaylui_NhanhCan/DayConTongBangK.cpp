#include <bits/stdc++.h>
using namespace std;

int a[50], b[50], n, k, testCase, mark;

void output() {
    testCase++;
    for (int i = n; i >= 1; i--)
        if (b[i] == 1) {
            mark = i;
            break;
        }
        
    cout << "[";
    
    for (int i = 1; i <= n; i++) {
        if (b[i]) {
            cout << a[i];
            if (i != mark) cout << " ";
        }

    }
    
    cout << "] ";
}

bool check() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i] * b[i];
    }
    if (sum == k) return 1;
    else return 0;
}

void backTrack(int i) {
    for (int j = 1; j >= 0; j--) {
        b[i] = j;
        if (i == n) {
            if (check()) output();
        } else backTrack(i + 1);

    }
}
main() {
    int t;
    cin >> t;
    while (t--) {
        testCase = 0;
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
            
        sort(a + 1, a + n + 1);
        backTrack(1);
        
        if (!testCase)
            cout << -1;
        cout << endl;
    }
}
