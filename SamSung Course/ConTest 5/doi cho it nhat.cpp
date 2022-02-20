#include<bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
bool cmp(pair<int, int> a, pair<int, int> b){
	if(a.first < b.first) 
		return true;
	if(a.first == b.first && a.second < b.second) 
		return true;
	return false;
}
int main(){
//	FileIO();
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<pair<int, int> > a(n);
		for(int i = 0; i < n; i++){
			cin >> a[i].first;
			a[i].second = i;
		}
		int res = 0;
		sort(a.begin(), a.end(), cmp);
		for(int i = 0; i < n; i++){
			while(a[i].second != i){
				res ++;
				swap(a[i], a[a[i].second]);
			}
		}
		cout << res << endl;
	}
	return 0;
}