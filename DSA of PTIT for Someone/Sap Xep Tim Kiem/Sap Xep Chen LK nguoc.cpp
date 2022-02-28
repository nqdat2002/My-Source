#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n + 5];
	for(int i = 0; i < n; i ++) cin >> a[i];
	
	vector<vector<int> > res;
	for(int i = 0; i < n; i ++){
		for(int j = 0; j < i; j ++){
			for(int k = j + 1; k <= i; k ++)
				if(a[j] > a[k])
					swap(a[j], a[k]);
		}
		vector<int> t;
		for(int j = 0; j <= i; j ++)
			t.push_back(a[j]);
		res.push_back(t);
	}
	reverse(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++){
		cout << "Buoc " << res.size() - i - 1 << ": ";
		for(int j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}
	return 0;
}
