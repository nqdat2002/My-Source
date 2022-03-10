#include <bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(auto &x: v) cin >> x;
		cout << "[";
		for(int i = 0; i < v.size() - 1; i ++)
			cout << v[i] << " ";
		cout << v[v.size() - 1] << "]" << endl;
		while(n > 1){
			for(int i = 0; i < v.size() - 1; i ++)
				v[i] = v[i] + v[i + 1];
			v.pop_back();
			cout << "[";
			for(int i = 0; i < v.size() - 1; i ++)
				cout << v[i] << " ";
			cout << v[v.size() - 1] << "]" << endl;
			n--;
		}
	}
    return 0;
}
