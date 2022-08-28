#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define bg begin()
#define e end()
#define sz size()
#define pb push_back
#define loop(i, l, r) for(ll i = l; i <= r; i++)
#define endl "\n"

using namespace std;
ll m, n, k;

void swap(ll &a, ll &b){
     ll tmp = a;
     a = b;
     b = tmp;
}
void Solve(){
     ll cnt = 0;
     for(ll i = 1; i * i <= k; i++){
         if(k % i == 0){
            ll l = i, r = k / i;
            ll sq1 = (m - l + 1) * (n - r + 1);
            if(sq1 > 0) cnt += sq1;
            if(l != r){
               swap(l, r);
               sq1 = (m - l + 1) * (n - r + 1);
               if(sq1 > 0) cnt += sq1;
            }
         }
     }
     cout << cnt;
}
