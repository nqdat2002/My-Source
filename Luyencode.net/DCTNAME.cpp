#include <bits/stdc++.h>
#define TASKNAME "DCTNAME"
#define maxn 1000010
#define cmax 1000000007
#define llmax (1LL << 61)
#define el '\n'
#define pb push_back
#define mp make_pair
#define getbit(s,i) ((s>>(i-1))&1)
#define bug(X) { cerr << #X << " = " << (X) << endl; }
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL)
#define For(i,a,b) for(int i = a; i <= b; i++)
#define Ford(i,a,b) for(int i = a; i >= b; i--)
#define Forv(i,v) for(int i = 0, _v = v.size(); i < _v; i++)

using namespace std;

typedef long long ll;
typedef pair<int, int> ptq;

string s1, s2;
vector <int> f[2][maxn];
int Next[2][maxn][26];
int m, n;

void init()
{
    m = s1.size(), n = s2.size();
    s1 = ' ' + s1, s2 = ' ' + s2;
    For(j,0,25) Next[0][m][j] = m + 1, Next[1][n][j] = n + 1;
    Ford(i,m-1,0)
    {
        For(j,0,25)
        {
            if (s1[i+1] - 'a' == j)
                Next[0][i][j] = i + 1;
            else Next[0][i][j] = Next[0][i+1][j];
        }
    }
    Ford(i,n-1,0)
    {
        For(j,0,25)
        {
            if (s2[i+1] - 'a' == j)
                Next[1][i][j] = i + 1;
            else Next[1][i][j] = Next[1][i+1][j];
        }
    }
}

string toString(int x)
{
    char c = 'a' + x;
    stringstream ss;
    ss << c;
    string st;
    ss >> st;
    return st;
}

string solve()
{
    string res = "";
    int f1 = 0, f2 = 0;
    Ford(i,25,0)
    {
        if (f1 > m || f2 > n) continue;
        while (Next[0][f1][i] <= m && Next[1][f2][i] <= n)
        {
            //res += toString(i);
            cout << char(i+'a');
            f1 = Next[0][f1][i];
            f2 = Next[1][f2][i];
        }
    }
    return res;
}

int main()
{
    if (fopen(TASKNAME".inp","r"))
    {
        freopen(TASKNAME".inp","r",stdin);
        freopen(TASKNAME".out","w",stdout);
    } else IOS;
    cin >> s1 >> s2;
    init();
    solve();
}

