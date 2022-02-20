#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std;
bool so_ngto(int x) {
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}
int main(){
    int n, k, dem = 0;
    cin >> n >> k;
    for (int p=2 ; p<=n-k ; p++)
        if (so_ngto(p) && so_ngto(p+k))
            dem++;
            
    cout << dem;
}
