#include <bits/stdc++.h>
#define maxN 1005
using namespace std;
int n, l, check[maxN], tam, ans1, ans2, a, b;
int main() {

    cin >> n >> l;
    ans1 = -100000007;
    ans2 = -100000007;
    for (int i = 1; i <= n; ++i) {
        cin >> a >> b;
        ans1 = max(ans1, b - a + 1);
        tam = 0;
        for (int j = a; j <= b; ++j) {
            if (check[j] != -1)
                ++tam;
        }
        ans2 = max(ans2, tam);
        for (int j = a; j <= b; ++j) {
            check[j] = -1;
        }
    }
    cout << ans1 << " " << ans2 ;

    return 0;
}
