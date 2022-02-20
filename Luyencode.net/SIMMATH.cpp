#include <bits/stdc++.h>
#define mod 998244353
using namespace std;
int main(){
    int t;
    cin >> t;
    long long i, j, k;
    while(t--){
        cin >> i >> j >> k;
        k = ( k*(k+1)/2 ) % mod;
        j = ( ( (j*(j+1)/2) % mod) * k) % mod;
        i = ( ( (i*(i+1)/2) % mod) * j) % mod;
        cout << i << endl;
    }
    return 0;
}
