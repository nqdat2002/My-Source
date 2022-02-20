#include <bits/stdc++.h>
using namespace std;

struct sv{
	string name;
	int a, b, c;
	int sum;
};

int main(){
	int n; cin >> n;
	cin.ignore();
	vector<sv> v(n);
	for(int i = 0; i < n; i ++)
		getline(cin, v[i].name);
	int m = -1e7;
	for(int i = 0; i < n; i ++){
		cin >> v[i].a;
		v[i].sum += v[i].a;
	}
	for(int i = 0; i < n; i ++){
		cin >> v[i].b;
		v[i].sum += v[i].b;
	}
	for(int i = 0; i < n; i ++){
		cin >> v[i].c;
		v[i].sum += v[i].c;
		m = max(v[i].sum, m);
	}
	for(auto x : v){
		if(x.sum == m)
			cout << x.name << " " << x.a << " " << x.b << " " << x.c << endl;
	}
	return 0;
}