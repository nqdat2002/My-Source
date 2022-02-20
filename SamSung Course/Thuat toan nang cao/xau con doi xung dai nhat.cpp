/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        int n = str.size();
        int ans = 1;
        for (int i = 1; i < n - 1; i++) {
            int j = 1;
            int ans_le = 1;
            while (i >= j && i + j < n && str[i - j] == str[i + j]) {
                ans_le += 2;
                j++;
            }
            ans = max(ans, ans_le);
            if (str[i - 1] == str[i]) {
                j = 1;
                int ans_chan = 2;
                while (i >= j + 1 && i + j < n && str[i - j - 1] == str[i + j]) {
                    ans_chan += 2;
                    j++;
                }
                ans = max(ans, ans_chan);
            }
        }
        cout << ans << endl;
    }
    return 0;
}





#include <bits/stdc++.h>
using namespace std;
int n;
string s;
int *a, *b;
int dp1(){
	a = new int[n + 1];
	b = new int[n + 1];
	int *c;
	memset(a, 0, (n + 1) * sizeof(int));
	memset(b, 0, (n + 1) * sizeof(int));
	a[n - 1] = 1;
	for(int i = n - 1; i >= 0; i --){
		b[i] = 1;
		for(int j = i + 1; j < n; j ++){
			b[j] = (s[i] == s[j]) ?  a[j - 1] + 2 : max(b[j - 1], a[j]);
		}
		c = a; a = b; b = c;
	}
//	memcpy(a, b, sizeof(b));
	int maxlen = a[n - 1];
	delete [] a;
	delete [] b;
	return maxlen;
}
int main(){
	int t; cin >> t;
	cin.ignore();
	while(t--){
	    cin >> s;
	    n = s.size();
		cout << dp1() << endl;
	}
	return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int f[1005][1005] = {0};

int result(string s) {
    int n = s.length(), i, j, k, res = 1;
    for (i = 0; i < n; i++)
        f[i][i] = 1;
    for (k = 1; k <= n - 1; k++) {
        for (i = 0; i <= n - k - 1; i++) {
            j = i + k;
            if (s[i] == s[j] && k != 1)
                f[i][j] = f[i + 1][j - 1];
            else if (s[i] == s[j] && k == 1)
                f[i][j] = 1;
            else 
                f[i][j] = 0;
            
            if (f[i][j] == 1)
                res = max(res, j - i + 1);
        }
    }
    return res;
}

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        cout << result(s) << endl;
    }
    return 0;
}
