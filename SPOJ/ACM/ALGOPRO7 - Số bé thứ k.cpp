#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    while(t--){
    	int n, k; cin >> n >> k;
    	vector<int> a(n);
    	for(auto &x: a) cin >> x;
    	sort(a.begin(), a.end());
    	cout << a[k] << endl;
	}
} 
