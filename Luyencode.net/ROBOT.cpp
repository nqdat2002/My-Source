#include <bits/stdc++.h>
using namespace std;
long long Fmin(long long a,long long b){
	if(a<b) return a;
	else return b;
}
int main() {
    long long n,i, column, row, ans = 1e16;
    cin >> n;
    for (i = 1; i * i <= n; i++) {
        if (n % i == 0){
            column = i;
            row = n / i;
            ans = Fmin((column - 1) + (row - 1), ans);
        }
    }
    cout << ans;
    return 0;
}
