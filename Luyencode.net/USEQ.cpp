#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//    int t;
//    cin >> t;
//    while (t --){
	    long long n, x, y;
		cin >> n;
		cin >> x;
	    for(int i = 1; i <= n - 1; i ++){
	        cin >> y;
			x^=y;
	    }
	    cout << x << endl;
//	}
	return 0;
}