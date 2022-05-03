#include <bits/stdc++.h>
#define KungFlu "I don't care where are you from let's destroy this fucking kung flu"
#define ld long double
#define ll long long int
#define fl float
#define dou double
#define cst const
#define FORUP(i, star, end) for (int i = star; i <= end; ++i)
#define FORDOWN(i, star, end) for (int i = star; i >= end; --i)
#define FORAUTO(item, m) for (auto item : m)
#define foreach(vector) \
    for (auto it : vector) cout << it << ' ';
#define foreach_nospace(vector) \
    for (auto it : vector) cout << it;
#define Map_Foreach(map) \
    for (auto it : map) cout << it.fi << ' ' << it.se << endl;
#define SUM(a, b) a + b
#define SUB(a, b) a - b
#define MUL(a, b) a* b
#define DIV(a, b) a / b
#define MODMAGIC(a, b) a % b
#define MAXIMON (1e8 + 9)
#define maxn ((ll)1e7 + 9)
#define nmax (1e6)
#define PI 3.14159265358979323846
#define PINor 3.14
#define mod 1000000007
#define nmax 1001
#define mmax 100001
#define MaTrixSize 6009
#define UpCase(s) transform(s.begin(), s.end(), s.begin(), ::toupper);
#define LowCase(s) transform(s.begin(), s.end(), s.begin(), ::tolower);
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define AutoInputArray(a, b, x) FORUP(a, 1, b) cin >> x[i];
#define outPutFormat(number, digit) cout << fixed << setprecision(digit) << number << endl;
#define outPutNumber(num) cout << num << endl;
#define VctUniq(vector)                 \
    sort(vector.begin(), vector.end()); \
    vector.erase(unique(vector.begin(), vector.end()), vector.end());
#define VctUniqGreater(vector)                         \
    sort(vector.begin(), vector.end(), greater<ll>()); \
    vector.erase(unique(vector.begin(), vector.end()), vector.end());
#define SortAsc(a) sort(a + 1, a + 1 + n);
#define SortDesc(a) sort(a + 1, a + 1 + n, greater<ll>());
#define VectorSortASC(vector) sort(vector.begin(), vector.end());
#define VectorSortDESC(vector) sort(vector.begin(), vector.end(), greater<ll>());
#define AllOf(vector) vector.begin(), vector.end()
#define ArrayAll(a) a + 1, a + 1 + n
#define max_Of_Arr(vector) *max_element(vector.begin(), vector.end())
#define min_Of_Arr(vector) *min_element(vector.begin(), vector.end())
#define File_IO                       \
    freopen("input.inp", "r", stdin); \
    freopen("output.out", "w", stdout);
#define File_InPut freopen("input.inp", "r", stdin)
#define File_Out freopen("output.out", "w", stdin)
#define pb push_back
#define eb emplace_back
#define pob pop_back
#define add insert
#define clr clear
#define mp make_pair
#define vct vector
#define ss set
#define M map
#define stk stack
#define qe queue
#define dqq deque
#define ok true
#define wr false
#define fi first
#define se second
#define back return
#define len(vector) vector.size()
#define pir pair<int, int>
#define plr pair<ll, ll>
#define pcr pair<char, ll>
#define psr pair<string, ll>
#define endl "\n"
#define Endl "\n"
#define ENdl "\n"
#define ENDl "\n"
#define ENDL "\n"
#define PageBreak cout << "\n";
#define prInt <int, int>
#define dii <int, int>
#define dll <ll, ll>
#define dcl <char, ll>
#define INT_SIZE 32
#define to_s to_string
#define to_i stoi
#define to_I64 stoll
#define con continue
#define stop system("pause");
#define MAX 100000
#define whatIs(x) cerr << "Line " << __LINE__ << ": " << #x << " = " << (x) << endl
using namespace std;
ll x[maxn], y[maxn];
void bubblesort(ll a[], ll b[], ll n) {
    for (ll i = 0; i < n - 1; ++i)
        for (ll j = n - 1; j > i; --j) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                swap(b[j], b[j - 1]);
            }
        }
}
void quick(ll a[], ll b[], ll l, ll r) {
    srand(time(NULL));
    ll key = a[l + rand() % (r - l + 1)];
    ll i = l, j = r;
    while (i <= j) {
        while (a[i] < key) ++i;
        while (a[j] > key) --j;
        if (i <= j) {
            if (i < j) {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
            ++i;
            --j;
        }
    }
    if (l < j)
        quick(a, b, l, j);
    if (i < r)
        quick(a, b, i, r);
}

int main() {
    fast_io;
    ll n, t;
    cin >> t >> n;
    FORUP(i, 0, n - 1) { cin >> x[i]; }
    FORUP(i, 0, n - 1) { y[i] = abs(x[i]); }
    quick(y, x, 0, n - 1);
    ll time = x[0], cnt = 0;
    while (time <= t) {
        time += abs(x[cnt] - x[cnt + 1]);
        ++cnt;
    }
    cout << cnt << endl;
}
