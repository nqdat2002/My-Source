#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin >> n;
    int a[n];
    for(auto &x: a) cin >> x;
    sort(a, a + n);
    n -= 2;
    int index = 0;
    int sum = a[index];
    while(sum <= n){
        sum += a[index];
        ++index;
        --n;
    }
    cout << n + 1 << endl;
    return 0;
}
