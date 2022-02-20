#include <bits/stdc++.h>
using namespace std;
int n, a[310000], k, c = 0;
int main(){
    cin >> n >> k ;
    for( int i = 1 ; i <= n ; i++)
        cin >> a[i];
    for( int l = 1 ; l <= n ; l++){
        int x = 0;
        for( int r = l ; r <= n ; r++){
            if( a[r] % k == 0)
                x++;
            if( x <= 1)
                c++;
            else
                break;
        }
    }
    cout << c << endl;
    return 0;
}