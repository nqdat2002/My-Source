#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int f[502][502];
int n, m, x;
string res = "";
// 100000010
void solve(int i, int j, int val){
    if (i == 1 && j == 1){
        f[i][j] = val;
       	res = res + to_string(f[i][j]);
    }
    
    else if (j == 1){
        f[i][j] = f[i - 1][j] + val;
        res = res + to_string(f[i][j]);
    }

    else if (i == 1){
        f[i][j] = f[i][j - 1] + val;
        res = res + to_string(f[i][j]);
    }

  //  else f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + val;
    else{ 
    	f[i][j] = min(f[i - 1][j], f[i][j - 1]) + val;
    	res = res + to_string(f[i][j]);
    }
}
int main(){
	FileIO();
	int t; cin >> t;
	while(t--){
	    cin >> n >> m; 
	    for (int i = 1; i <= n; i++){
	        for (int j = 1; j <= m; j++){
	            cin >> x;
	            solve(i, j, x);
	        }
	    }
	    cout << res << endl;
	}
    return 0;
}
