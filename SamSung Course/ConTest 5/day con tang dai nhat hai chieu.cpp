#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
typedef pair<int, int> p;
typedef long long ll;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
ll n;
p a;
set<p> st[100005];
bool cmp(const p& a, const p& b) {
	return a.f < b.f && a.s < b.s;
}

bool check(set<p>& st) {
	for (set<p>::iterator it = st.begin(); it != st.end(); ++it)
		if (cmp(*it, a)) return true;
		else if (it->f >= a.f) break;
	return false;
}

ll binary_Search(ll l, ll r) {
	while (l < r) {
		ll m = (l + r) / 2;
		if (check(st[m]))
			l = m + 1;
		else
			r = m;
	}
	return l;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
//    FileIO();
	cin >> n;
	for (ll i = 0; i < n; i ++) {
		cin >> a.f >> a.s;
		ll index = binary_Search(0, n);
		if (index < n) {
			set<p>::iterator it = ++st[index].insert(a).f;
			while (it != st[index].end()) {
				if(cmp(a, *it))
					st[index].erase(it++);
				else it++;
			}
		}
	}
	ll res = 0;
	while (res < n && !st[res].empty())
		res++;
	cout << res << endl;
	return 0;
}