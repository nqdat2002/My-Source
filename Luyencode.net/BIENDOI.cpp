#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

int n;
vector <bool> vs;
pair <int, int> u;

void BFS(){
    queue <pair <int, int> > q; 
    q.push(mp(n, 0));
    vs[n] = 1;
    while (!q.empty()){
        u = q.front(); q.pop();
        if(u.F == 1){
            cout << u.S;
            return;
        }
        if(u.F % 3 == 0 && !vs[u.F / 3]){
            vs[u.F / 3] = 1;
            q.push(mp(u.F/3, u.S + 1));
        }
        if(u.F % 2 == 0 && !vs[u.F / 2]){
            vs[u.F / 2] = 1;
            q.push(mp(u.F/2, u.S + 1));
        }
        if(!vs[u.F - 1]){
            vs[u.F - 1] = 1;
            q.push(mp(u.F - 1, u.S + 1));
        }
    }
    
}

void xl (){
    cin >> n;
    vs.clear();
    vs.resize(n + 1, 0);
    BFS();
}

int main(){
    fastIO();
    int T; 
    cin >> T;
    while (T -- ){
        xl();
        cout << "\n";
    }
}