#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void save(int a[], int n){
	string s = "[";
	for(int i = 0; i < n; i++){
		s += to_string(a[i]);
		if(i < n - 1) s += " "; 
	} 
	s += "]";
	v.push_back(s); 
}

void track(int a[], int n){
	while(n){
		save(a, n);
		for(int i = 0; i < n - 1; i++){
			a[i] = a[i] + a[i + 1];
		}
		n--;	
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		v.clear();
		for(int i = 0; i < n; i++) cin >> a[i];
		track(a, n);
		for(int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
		cout << endl;
	}
}
