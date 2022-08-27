#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >>n >> k;
    if( n == k ) 
        cout << "0 0";
    else {
        int toida = 2 * k;
        if( toida + k <= n )
            cout <<"1 " << toida;
        else {
            int lon = toida+k - n;
            cout << "1 " << toida - lon;
        }
    }
    return 0;
}
