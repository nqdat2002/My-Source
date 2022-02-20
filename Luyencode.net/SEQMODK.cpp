#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef unsigned long long ull;
#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define ep emplace_back
#define EL printf("\n")
#define sz(A) (int) A.size()
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FOD(i,r,l) for (int i=r;i>=l;i--)
#define fillchar(a,x) memset(a, x, sizeof (a))
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int N = 1500;
const int inf = 1e9+7;
int n, k, a[N], F[N][55];

int main() {
	scanf("%d%d", &n,&k);
	FOR(i,1,n) scanf("%d", &a[i]), a[i] %= k;
	FOR(i,1,k-1) F[1][i] = -inf;
	F[1][a[1]] = 1;
	FOR(i,2,n)
	FOR(j,0,k-1)
	F[i][j] = max(F[i-1][j], F[i-1][(j-a[i]+k)%k] + 1);
	printf("%d\n", F[n][0]);
	return 0;
}
