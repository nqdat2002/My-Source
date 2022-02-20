#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
 
using namespace std;
 
typedef long long       ll;
typedef double          real;
 
typedef pair <int,int>  ii;
typedef vector <int>    vi;
typedef stack  <int>    si;
typedef queue  <int>    qi;
 
//-------------------------------------//
 
const int   N = 100000;
char        a[N], b[2*N];
int         n, m, c, r, res, x, z[N];
 
int main()
{
    //freopen("INP.INP","r",stdin);
    //freopen("OUT.OUT","w",stdout);
 
    scanf("%d\n", &m);
    for (int i=1;i<=m;i++) scanf("%c", &a[i]);
    b[n = 1] = '#';
    for (int i=1;i<=m;i++) {
        b[++n] = a[i];
        b[++n] = '#';
    }
    c = 1, r = 1, res = 0;
    for (int i=2;i<=n;i++) {
        x = 2*c-i;
        if (i < r) z[i] = min(z[x], r-i);
        while (b[i-1-z[i]] == b[i+1+z[i]]) z[i]++;
        res = max(res, z[i]);
        if (i+z[i] > r) {
            c = i;
            r = i+z[i];
        }
    }
    cout << res;
 
    return 0;
}
