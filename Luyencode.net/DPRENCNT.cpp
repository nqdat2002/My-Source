#include <bits/stdc++.h>
using namespace std;
long long M, N, f[1001][1001], res = 0;
string arr[1001];
void dp() {
    memset(f, 0, sizeof f);
    for (int i = 1; i <= M; i++)
        for (int j = 1; j <= N; j++) {
            if (arr[i][j - 1] == '1') {
                f[i][j] = 0;
                continue;
            } 
			else
                f[i][j] = min(f[i - 1][j], min(f[i][j - 1], f[i - 1][j - 1])) + 1;
            res += f[i][j];
        }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> M >> N;
    for (int i = 1; i <= M; i++) 
		cin >> arr[i];
    dp();
    cout << res;
    return 0;
}
