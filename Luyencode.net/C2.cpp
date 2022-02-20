#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main() {
    string str;
    cin >> str;
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
    cout << ans;
    return 0;
}
