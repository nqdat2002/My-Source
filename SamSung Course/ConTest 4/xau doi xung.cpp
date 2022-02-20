#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1, s2;
dp[1005][1005];
/*
ll a[100005];
void Solve(string str, ll ar[]) {
    int l = 0, r = 0;
    int n = str.length();
    ar[0] = 0;
    for (int i = 1; i < n; i ++) {
        if (i > r) {
            l = r = i;
            while (r < n && str[r] == str[r - l]) 
				r ++;
            ar[i] = r - l;
            r --;
        } 
		else {
            int k = i - l;
            if (ar[k] < r - i + 1) 
				ar[i] = ar[k];
            else {
                l = i;
                while (r < n && str[r] == str[r - l]) 
					r ++;
                ar[i] = r - l;
                r --;
            }
        }
    }
}
int main() {
	int t; cin >> t;
	while(t--){
		string res = "";
	    cin >> s1;
	    int n = s1.length();
	    s2 = s1;
	    reverse(s2.begin(), s2.end());
	    Solve(s2 + s1, a);
	    for(int i = n; i < 2 * n; i ++) {
	        if (a[i] >= 2 * n - i) {
	            res = res + s1.substr(0, i - n) + s2;
	            cout << res.size() - n << endl;
	            break;
	        }
	    }
	}
	return 0;
}
*/
int Solve(string &s1, string &s2){
	int n = s1.length();
	int m = s2.length();
	for(int i = 1; i <= n; i ++){
		for(int j = 1;j <= m;j ++){
			if(s1[i - 1] == s2[j - 1]) 
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else 
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}
	return dp[n][m];
}
int main(){
	int t; cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1;
		s2 = s1;
		reverse(s2.begin(), s2.end());
		cout << s1.size() - Solve(s1,s2) << endl;
	}
	return 0;
}
