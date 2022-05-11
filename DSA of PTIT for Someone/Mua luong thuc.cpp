#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int n, s, m;
    	cin >> n >> s >> m;
    	if(s > 6 && (n * 6 < m * 7) || n < m)
			cout << "-1";
		else{
			int res = (m * s) / n;
			if((s * m) % n != 0)
				res ++;
			cout << res;
		}
		cout << endl;
    }
}
    	
