#include <bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;
int sum(ll x){
    int s = 0;
    while (x) { s += x % 10; x /= 10; }
    return s;
}
int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    int cnt = 0;
    for (int i = 1; i <= 81; i++){
        ll mu = 1;
        for (int j = 1; j <= a; j++)
            mu = mu*1LL*i;
        ll x = b * mu + c;
        int t = sum(x);
        if (x > 0 && x < 1e9 && sum(x) == i) cnt++;
    }
    cout << cnt;
    return 0;
}
