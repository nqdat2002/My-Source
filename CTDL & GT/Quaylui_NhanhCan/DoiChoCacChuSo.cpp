#include <bits/stdc++.h>
using namespace std;
void timMax(string str, int k, string& max) {
    if (k == 0)
        return;

    int n = str.length();

    // kiem tra tung so
    for (int i = 0; i < n - 1; i++) {
        // so sanh no voi nhung so sau do
        for (int j = i + 1; j < n; j++) {
            // so sanh de doi vi tri
            if (str[i] < str[j]) {
                swap(str[i], str[j]);

                // so sanh voi 
                if (str.compare(max) > 0)
                    max = str;

                // recurse of the other k - 1 swaps
                timMax(str, k - 1, max);

                // backtrack
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
        string max = str;

        timMax(str, k, max);
        
        cout << max << endl;
    }
    return 0;
}
