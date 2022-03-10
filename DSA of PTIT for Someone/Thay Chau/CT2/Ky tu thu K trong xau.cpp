#include <bits/stdc++.h>
using namespace std;
char Try(int k, int x){
    if((k - 1) % 2 == 0) 
        return char(x + 'A');
    else if((k - 2) % 4 == 0) 
        return char(x + 1 + 'A');
    return Try(k / 4, x + 2);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        cout << Try(k, 0) << endl;
    }
    return 0;
}
