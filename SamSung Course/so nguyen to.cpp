#include <bits/stdc++.h>
using namespace std;
int n, p, S, idx;
int Binary_Search(vector<int> arr, int left, int right, int x) {
  	if (right >= left) {
    	int middle = left + (right - left) / 2; 
    	if (arr[middle] == x)
    		return middle;
    	if (arr[middle] > x)
      		return Binary_Search(arr, left, middle - 1, x);
    	return Binary_Search(arr, middle + 1, right, x);
  	}
  	return -1;
}
bool ok[500] = {false};
vector< vector <int> > res;
vector<int> a;
void Sang(){
	for(int i = 2; i <= 300; i ++){
		if(!ok[i]){
			a.push_back(i);
			for(int j = i * i; j <= 300; j += i)
				ok[j] = true;
		}
	}
}
void inp(){
	cin >> n >> p >> S;
	idx = Binary_Search(a, 0, 46, p);
	for(int i = 0; i < 500; i++)
		ok[i] = false;
}
void Try(int i, int Sum, vector<int> v){
	if(Sum > S) return;
	if(Sum == S && v.size() == n){
		res.push_back(v);
		return;
	}
	for(int j = i; j < a.size(); j ++){
		if( ok[j] == false && Sum + a[j] <= S && v.size() < n){
			v.push_back(a[j]);
			ok[j] = true;
			Try(j + 1, Sum + a[j], v);
			v.pop_back();
			ok[j] = false;
		}
	}
}
int main(){
	int t; cin >> t;
	Sang();
	while(t--){
		inp();
		vector<int> v;
		v.clear();
		Try(idx + 1, 0, v);
//		cout << idx << endl;
		cout << res.size() << endl;
		for(int i = 0; i < res.size(); i ++){
			for(int j = 0; j < res[i].size(); j ++){
				cout << res[i][j] << " ";
			}
			cout << endl;
		}
		res.clear();
	}
	return 0;
}
