#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, s = 0;
    	cin >> n;
    	for(int i = 0; i < n; i ++){
    		int x; cin >> x;
    		s += x;
		}
		cout << n - s << endl;
	}
}
