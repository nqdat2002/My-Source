#include<bits/stdc++.h>
#define mod              1000000007
#define ll               long long
#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define tree             node*
#define sz(a)            a.size()
#define f                first
#define s                second
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define FORX(i,l,r,x)    for(int i=l;i<r;i+=x)
#define FORD(i,l,r)      for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)          memset(M,x,sizeof(M))
#define reset()          FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t;cin.ignore(); while (t--)
#define pq(x)            priority_queue<x>
#define neg_pq(x)        priority_queue<x, vector<x>, greater<x>>
#define all(M)           M.begin(),M.end()
using namespace std;
 
//_______________________NGUYá»N_NGá»C_TOÃN_______________________//
char M[1001][1001];
string dp[1001], b[1001];
 
string chuyenCoSo(string s) {
	ll tmp = 1;
	string res = "";
	for (auto c : s) {
		tmp = tmp * 2 + c - 48;
		if (tmp >= 8) {
			res += string(1, tmp % 8 + '0');
			tmp /= 8;
		}
	}
	while (res[0] == '0') res.erase(0, 1);
	if (res.size() == 0) res = "0";
	return res;
}
 
int main() {
	int n; cin >> n;
	FOR(i, 0, n)FOR(j, 0, n)cin >> M[i][j];
 
	FOR(i, 0, n) {
		if (i == 0)dp[0] = M[0][0];
		else dp[i] = dp[i - 1] + M[0][i];
	}
	FOR(i, 1, n) {
		FOR(j, 0, n) {
			if (j == 0)dp[0] = dp[0] + M[i][0];
			else {
				dp[j] = min(dp[j] + M[i][j], dp[j - 1] + M[i][j]);
			}
		}
	}
	if (sz(dp[n - 1]) % 3 != 0)dp[n - 1] = string(3 - sz(dp[n - 1]) % 3, '0') + dp[n - 1];
	cout << chuyenCoSo(dp[n - 1]) << endl;
}
