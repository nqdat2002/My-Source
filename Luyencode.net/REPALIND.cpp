#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        string s;
        long long k;
        cin >> s >> k;
        bool kt = true;
        for(int i = 0, j = s.length()-1; i < j; i++, j--)
            if (s[i] != s[j])
                kt = false;
        puts((kt) ? "YES" : "NO");
    }
    return 0;
}