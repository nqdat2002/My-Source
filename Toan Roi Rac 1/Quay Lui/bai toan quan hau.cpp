#include <bits/stdc++.h>
using namespace std;
int n, A[200], B[200] = {0};
int X[200] = {0}, N[200] = {0};
void outp() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
    
}
void Try(int i) {
    int j;
    for (j = 1; j <= n; j++) {
        if (!B[j] && !X[i - j + n] && !N[i + j - 1]) {
            A[i] = j;
            B[j] = 1;
            X[i - j + n] = 1;
            N[i + j - 1] = 1;
            if (i == n)
                outp();
            else Try(i + 1);
            B[j] = 0;
            X[i - j + n] = 0;
            N[i + j - 1] = 0;
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n;
        Try(1);
    }
    return 0;
}
