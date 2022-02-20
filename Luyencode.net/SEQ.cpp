#include <iostream>
using namespace std;
int n,k;
int f[6704],a[6704];
int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        a[0] += a[i];
    }
    for (int i = 1; i <= n; i++){
        f[i] = 1e9;
        for (int j = 1; j <= k; j++){
            if (i-j < 0) break;
            f[i] = min(f[i],f[i-j] + a[i]);
        }
    }
    f[0] = 1e9;
    for (int i = n; i > n-k; i--)
        f[0] = min(f[0],f[i]);
    cout << a[0] - f[0];
    return 0;
}
