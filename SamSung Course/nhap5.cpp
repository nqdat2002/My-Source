#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s1, s2;
ll ar[100005];
void Solve(string str) {
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
	int t = 1;
	while(t--){
		string res = "";
	    cin >> s1;
	    int n = s1.length();
	    s2 = s1;
	    reverse(s2.begin(), s2.end());
	    Solve(s2 + s1);
	    for(int i = n; i < 2 * n; i ++) {
	        if (ar[i] >= 2 * n - i) {
	            res = res + s1.substr(0, i - n) + s2;
	            break;
	        }
	    }
	    for(int i = 0; i < res.size(); i ++)
	    	cout << res[i];
	    cout << endl;
	}
	return 0;
}