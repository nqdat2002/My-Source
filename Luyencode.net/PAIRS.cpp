#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> p;
typedef vector<vector<int> > vt;
typedef vector<pair<int, int> > vp;

const ll mod = 1e9 + 7;
const int oo = 1e6 + 7;

#define f first
#define s second
#define pb push_back
#define ep emplace_back
#define sz(a) (int) a.size()
#define ms(s, n) memset(s, n, sizeof(s))
#define present(t, x) (t.find(x) != t.end())
#define all(a) (a.begin(), a.end())
#define For(i, l, r) for (int i = l; i <= r; i++)
#define Fod(i, r, l) for (int i = r; i >= l; i--)
#define fillchar(a, x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

// Author: Nguyen Quoc Dat
// ID: B20DCPT053
// Organization: PTIT
// Date: 19/02/22 17:48
// Program: Cap So
// -------------------  Your code STARTS here !!!---------------------------

const int nmax = 100005;
int b[nmax];

void initBIT() { 
    memset(b, 0, sizeof(b)); 
}

void updateBIT(int i, int d) {
    for (; i; i -= i & -i) 
        b[i] += d;
}
int queryBIT(int i) {
    int res = 0;
    for (; i < nmax; i += i & -i) 
        res += b[i];
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    initBIT();
    ll cnt = 0;
    stack<int> s;

    for (int i = 1; i <= n; i++) {
        int a; cin >> a;
        if(a % 2 == 0){
            cnt += queryBIT(a + 1);
            s.push(a);
        }
        else{
            while(!s.empty()){
                updateBIT(s.top(), 1);
                s.pop();
            }
        }
    }
    
    cout << cnt << endl;
    return 0;
}
