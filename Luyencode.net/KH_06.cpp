#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
int c[1000005];
bool cmp(pair<int, int> a, pair<int, int> b){
	return a.s < b.s;
}
int main(){
	int n; cin >> n;
	vector<pair<int, int> > pr;
	for(int i = 0; i < n; i ++){
		int x, y; cin >> x >> y;
		pair<int, int> z = make_pair(x, y);
		pr.push_back(z);
	}
	sort(pr.begin(), pr.end(), cmp);
	int m = 0;
	c[m] = 0;
	int r = pr[0].s;
	for(int i = 1; i < n; i ++){
		if(r <= pr[i].f){
			c[m++] = i;
			r = pr[i].s;
		}
	}
	cout << m + 1 << endl;
	return 0;
}
