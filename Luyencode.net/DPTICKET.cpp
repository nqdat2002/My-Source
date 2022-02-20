#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
#define N 111119
#define ll long long

int main() {

    int n, a[N], b[N], dp[N] = {};
    	cin >> n;
    for (int i = 1; i <= n; i++) 
		cin >> a[i];
    for (int i = 1; i <= n - 1 ; i++) 
		cin >> b[i];
    dp[1] = a[1];

    for (int i = 2; i <= n; i++) {
        dp[i] = min(b[i - 1] + dp[i - 2], dp[i - 1] + a[i]);
    }
    cout << dp[n];
    return 0;
}
