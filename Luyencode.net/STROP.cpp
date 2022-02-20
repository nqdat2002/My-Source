#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100005;

void readAndPreprocess(char s[], int &n, int diff[]) {
    scanf("%s", s);
    n = strlen(s);

    for(int i = 1; i <= n; ++i) {
        if (s[i-1] == 'A')
            diff[i] = diff[i-1] - 1;
        else
            diff[i] = diff[i-1] + 1;
    }
}

int n, m, q, diffS[MAXN], diffT[MAXN];
char s[MAXN], t[MAXN];

int getDiff(int diff[], int l, int r) {
    int res = diff[r] - diff[l-1];
    return (res%3 + 3)%3;
}

int main() {
    // freopen("strop.inp", "r", stdin);
    // freopen("strop.out", "w", stdout);

    readAndPreprocess(s, n, diffS);
    readAndPreprocess(t, m, diffT);

    scanf("%d", &q);
    for(int i = 0; i < q; ++i) {
        int a, b, c, d;
        scanf("%d%d%d%d", &a, &b, &c, &d);

        bool canTransform = (getDiff(diffS, a, b) == getDiff(diffT, c, d));
        puts(canTransform ? "YES" : "NO");
    }

    return 0;
}
