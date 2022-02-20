#include <bits/stdc++.h>
using namespace std;
void timMax(string str, int k, string& max) {
    if (k == 0)
        return;
    int n = str.length();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (str[i] < str[j]) {
                swap(str[i], str[j]);
                if (str.compare(max) > 0)
                    max = str;
                timMax(str, k - 1, max);
                swap(str[i], str[j]);
            }
        }
    }
}
int main() {
    int test_count, k;
    string str;
    cin >> test_count;
    while (test_count--) {
        cin >> k;
        cin >> str;
        string res = str;
        timMax(str, k, res);
        cout << res << endl;
    }
    return 0;
}
