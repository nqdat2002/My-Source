#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define __unique(V) (V).resize(unique((V).begin(),(V).end())-(V).begin())
#define cntbit(X)   __builtin_popcount((X))
#define bit(S,i) (((S)>>(i))&1)
#define PI	acos(-1)
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define eb  emplace_back
#define TASK "BIGMOD"
using namespace std;
string A,B;
int MOD;
///--------------------------
void    readf(){
	cin >> A >> B >> MOD;
}
///--------------------------
void    solve(){
    int a = 0,b;
    for(int i = 0; i < A.size(); ++i)
		a = (10LL * a + A[i] - '0') % MOD;
    int tmp = a;
    int ans = 1;
    for(int i = B.size() - 1; i >= 0; --i){
        for(int j = 0; j < B[i] - '0'; ++j) ans = 1LL * ans * tmp % MOD;
        int pro = 1;
        for(int j = 0; j < 10; ++j) pro = 1LL * pro * tmp % MOD;
        tmp = pro;
    }
    cout << ans << '\n';
}
///--------------------------
int   main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef TLH2203
        freopen(TASK".inp", "r", stdin);
        freopen(TASK".out", "w", stdout);
    #endif // TLH2203
    readf();
    solve();
}




