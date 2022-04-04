#include <iostream>
#include <vector>
using namespace std;

int main() {
    cin.tie(0); ios::sync_with_stdio(0);
    int m, n; cin >> m >> n;

    vector<vector<int>>
        A(2, vector<int>(n+1, -1)),
        L(2, vector<int>(n+1)),
        C(2, vector<int>(n+1)),
        F(2, vector<int>(n+1));

    int result = 1;
    while (m--) {
        for (int j=1; j<=n; j++) {
            cin >> A[1][j];

            L[1][j] = A[1][j]==A[1][j-1]? L[1][j-1] + 1 : 1;
            C[1][j] = A[1][j]==A[0][j]? C[0][j] + 1 : 1;
            F[1][j] = A[1][j]==A[0][j-1]? min(min(L[1][j], C[1][j]), F[0][j-1] + 1) : 1;

            result = max(result, F[1][j]);
        }
        swap(A[0], A[1]);
        swap(L[0], L[1]);
        swap(C[0], C[1]);
        swap(F[0], F[1]);
    }
    cout << result << endl;
}
