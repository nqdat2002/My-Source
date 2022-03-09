#include <bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(long long i = (a); i <= (b); ++i)
#define ll long long

ll sum (ll n)
{
    ll root = sqrt(n);
    ll ans = 0;
    For (i,1,root) ans+= n/i;

    ans = 2 * ans - (root * root);
    return ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
 	// freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
    cout << sum(n);
}
