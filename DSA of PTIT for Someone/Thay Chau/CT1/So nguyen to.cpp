#include <bits/stdc++.h>
using namespace std;
vector<int> sang(int n){
	vector<bool> nto(n + 1, true);
	nto[0] = nto[1] = false;
	for(int i = 2; i * i <= n; i ++){
		if(nto[i]){
			for(int j = i * i; j <= n; j += i)
				nto[j] = false;
		}
	}
	vector<int> prime;
	for(int i = 2; i <= n; i ++)
		if(nto[i])
			prime.push_back(i);
	
	return prime;
}

const vector<int> prime = sang(205);

int n, s, p, c[100], m;
bool ok;
vector<int> a;
vector<vector<int> > res;

void khoitao(){
	cin >> n >> p >> s;
	a.clear();
	res.clear();
	for(int i = 0; i < prime.size(); i ++){
		if(prime[i] >= p + 1 && prime[i] <= s)
			a.push_back(prime[i]);
	}
	memset(c, 0, sizeof(c));
	m = a.size();
}
void Try(int i){
	for(int j = c[i - 1] + 1; j <= m - n + i; j ++){
		c[i] = j;
		if(i == n){
			int sum = 0;
			vector<int> t;
			for(int i = 1; i <= n; i ++){
				t.push_back(a[c[i] - 1]);
				sum += a[c[i] - 1];
			}
			if(sum == s) res.push_back(t);
		}
		else Try(i + 1);
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		khoitao();
		Try(1);
		cout << res.size() << endl;
		for(auto x: res){
			for(auto y: x) cout << y << " ";
			cout << endl;
		}
	}
	return 0;
}
