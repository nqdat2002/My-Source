#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long N, D, T, a, x = 0;
    cin >> N >> D >> T;
    while (N--) {
        cin >> a;
        x = 0;
        if (a <= T)
            x += 1;
        else{
            a = a - T;
            x += ((a + D - 1) / D) + 1;
        }
        cout << x << " ";
    }
}
