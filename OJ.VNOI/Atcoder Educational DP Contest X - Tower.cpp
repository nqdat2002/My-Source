#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp[20005];
struct Knap{
	int w, s, v;
};
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Knap a[1005];
    int f[1005];
	int n; cin >> n;
	for(int i = 1; i <= n; ++i){
		cin >> a[i].w >> a[i].s >> a[i].v;
		f[i] = i;
	}
	sort(f + 1, f + n + 1, [&](const int &x, const int &y) {return a[x].w + a[x].s < a[y].w + a[y].s;});
	for(int i = 1; i <= n; ++i){
		int k = f[i];
		for(int j = a[k].s + a[k].w; j >= a[k].w; --j)
			dp[j] = max(dp[j], dp[j - a[k].w] + a[k].v);
	}
	cout << *max_element(dp + 1, dp + 20005) << endl;
	return 0;
}
