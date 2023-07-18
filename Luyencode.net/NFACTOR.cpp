#include <iostream>
using namespace std; 
long long int dem(long long int n){
    long long int d = 0; 
    while(n >= 5){
        n = n / 5; 
        d += n; 
   }
   return d; 
}
void tim(long long int n){
    long long int l, d, m, r;
    l = 0;
    r = 40000000000000025;
    while (l < r) {
        m = (l + r) / 2;
        d = dem(m);
        if (d < n){
            l = m + 1;
        } else {
            r = m;
        }
    }
    cout << l << endl;
}
main(){
    long long int t, n, i, j, d;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        tim(n);
    }
}
