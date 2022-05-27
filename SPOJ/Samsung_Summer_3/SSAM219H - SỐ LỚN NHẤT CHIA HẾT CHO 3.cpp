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
// Date: 16/03/22 00:15
// Program: Boi so lon nhat cua 3
// -------------------  Your code STARTS here !!!---------------------------

void Solve(){
    int n; cin >> n;
    vector<int> a;
    priority_queue<int, vector<int>, greater<int> > q1, q2;
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        int x; cin >> x;
        sum += x;
        if(x % 3 == 0) a.push_back(x);
        else if(x % 3 == 1) q1.push(x);
        else q2.push(x);
    }
    if(sum % 3 == 1){
        if(q1.size() >= 1) q1.pop();
        else if(q2.size() >= 2){
            q2.pop(); q2.pop();
        }
        else {
            cout << -1;
            return;
        }
    }
    if(sum % 3 == 2){
        if(q2.size() >= 1) q2.pop();
        else if(q1.size() >= 2){
            q1.pop(); q1.pop();
        }
        else {
            cout << -1;
            return;
        }
    }
    while(!q1.empty()){
        a.push_back(q1.top());
        q1.pop();
    }
    while(!q2.empty()){
        a.push_back(q2.top());
        q2.pop();
    }

    if(!a.size()) cout << -1;
    else{
        sort(a.begin(), a.end(), greater<int>());
        for(auto x: a) cout << x;
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
