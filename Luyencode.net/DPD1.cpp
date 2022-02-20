#include <string>
#include <cassert>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

#define BIT(x, k) ((x >> k) & 1)
int cntbit (int mask) {
    int res = 0;
    for (int bit = 0; bit < 10; bit++)
        if (BIT (mask, bit) == 1) res++;
    return res;
}
int upbit (int x, int k) {
    return (x | (1 << k));
}

const int N = 20;
const int MOD = 998244353;
const int MASK = (1 << 10) + 5;

string S;
int k, sz;
long long LL, RR;
long long Pow[N];
long long dp[N][MASK][2][2];
long long Count[N][MASK][2][2];

string NumToString (long long n) {
    string s;
    while (n > 0) {
        s = char (n % 10 + '0') + s;
        n /= 10;
    }
    return s;
}

long long mul (long long a, long long b) {
    return (a * b) % MOD;
}

int fix (int ok, int c, char b) {
    if (ok) return ok;
    char a = (c + '0');
    if (a < b) return 1;
    if (a == b) return 0;
    return 2;
}

long long cal (int i, int mask, int ok, int flag) {
    long long &foo = dp[i][mask][ok][flag];
    long long &cnt = Count[i][mask][ok][flag];

    if (foo != -1) return foo; else foo = 0;
    if (i == sz) {
        foo = 0, cnt = flag;
        return foo;
    }

    for (int digit = 0; digit < 10; digit++) {
        int nFlag = (flag | (digit > 0));
        int nMask = upbit (mask, digit);
        if (!nFlag) nMask = mask, assert (nMask == 0);
        if (cntbit (nMask) > k) continue;
        int nOk = fix (ok, digit, S[i+1]);
        if (nOk == 2) continue;
        long long mtp = cal (i + 1, nMask, nOk, nFlag);
        cnt = (cnt + Count[i+1][nMask][nOk][nFlag]) % MOD;
        foo = (foo + digit * mul (Pow[sz - i - 1], Count[i+1][nMask][nOk][nFlag]) + mtp) % MOD;
    }

    return foo;
}

int main() {
    // Input Format for Test Creator
    if (fopen ("input.txt", "r")) {
        freopen ("input.txt", "r", stdin);
        freopen ("answer.txt", "w", stdout);
    }

    if (fopen ("main.in", "r"))
        freopen ("main.in", "r", stdin);
    else if (fopen ("DP_D1.inp", "r"))
        freopen ("DP_D1.inp", "r", stdin),
        freopen ("DP_D1.out", "w", stdout);

    scanf ("%lld %lld %d", &LL, &RR, &k);

    Pow[0] = 1;
    for (int i = 1; i < 19; i++)
        Pow[i] = (Pow[i-1] * 10) % MOD;

    S = NumToString (LL - 1); 
    sz = S.size(), S = ' ' + S;
    memset (dp, -1, sizeof dp);
    memset (Count, 0, sizeof Count);
    long long Left = cal (0, 0, 0, 0);
    
    S = NumToString (RR);
    sz = S.size(), S = ' ' + S;
    memset (dp, -1, sizeof dp);
    memset (Count, 0, sizeof Count);
    long long Right = cal (0, 0, 0, 0);

    printf ("%lld", (Right - Left + MOD) % MOD);
    return 0;
}
