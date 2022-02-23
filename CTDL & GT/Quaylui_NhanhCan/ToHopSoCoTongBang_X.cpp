#include <bits/stdc++.h>
using namespace std;

int n, sum, a[50], testCase;
int b[50], temp;

void output() {
    testCase++;
    cout << "[";
    
    for (int i = 1; i < temp; i++) {
        cout << b[i];
        if (i < temp - 1) cout << " ";
    }
    
    cout << "] ";

}

void backTrack(int i, int sum) {
    if (i <= n && sum == 0) output();
    while (i <= n && sum - a[i] >= 0) {
        b[temp] = a[i];
        temp++;

        backTrack(i, sum - a[i]);
        i++;
        temp--;
    }
}

main() {
    int t;
    cin >> t;
    while (t--) {
        testCase = 0;
        temp = 1;
        cin >> n >> sum;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++)
                if (a[i] == a[j]) {
                    swap(a[j], a[n]);
                    --n;
                }
        }
        
        sort(a + 1, a + n + 1);
        
        if (sum < a[1]);
        
        else {
            backTrack(1, sum);
        }
        
        if (!testCase)
            cout << -1;
        cout << endl;
    }
}
