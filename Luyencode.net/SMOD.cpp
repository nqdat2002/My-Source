#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <sstream>

using namespace std;
typedef long long ll;
#pragma GCC optimization ("Ofast")
#pragma GCC target ("avx,avx2,fma")
#pragma GCC optimization ("unroll-loops")
#define mod 1000000007
#define loop for (int i=0; i< n; ++i)
#define loop1 for (int i=1; i< n; ++i)

int main(){
  ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
  ll a , b , n; cin >> a >> b >> n;
  ll curNum = a;
  ll k = 1;
  ll ans = 0;
  ll res1, res2, length, val;

  while(curNum <= b){
    k  = n / curNum;
    res2 = n / k; // i <= ?
    res1 = n / (k + 1); // i > ?
    res1 = max(res1, a - 1);
    res2 = min(res2, b);
    length = res2 - res1;
    val = (length % mod) * ((n - (k * (res1 + 1 + res2))/2) % mod);
    if (k % 2 == 1 && (res1 + res2 + 1) % 2 == 1){
      val -= length/ 2;
    }
    ans += val % mod;
    ans %= mod;
    curNum = res2 + 1;
    // cout << res1 << " " << res2 << " " << k << " "<< ans << " ";
    // cout << "\n";
  }
  cout << ans;
  // cin >> n;
}
