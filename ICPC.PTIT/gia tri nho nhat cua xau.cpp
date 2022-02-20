#include <bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
int minValue(string str, int k) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int l = str.length();
    if (k >= l)
        return 0;
    int freq[MAX_CHAR] = {0};
    for (int i = 0; i < l; i++)
        freq[str[i]- 'a']++;
    priority_queue<int> q;
    for (int i = 0; i < MAX_CHAR; i++)
        q.push(freq[i]);
    while (k--) {
        int temp = q.top();
        q.pop();
        temp --;
        q.push(temp);
    }
    int result = 0;
    while (!q.empty()) {
        int temp = q.top();
        result += temp * temp;
        q.pop();
    }

    return result;
}
int main() {
    int test, k;
    string str;
    cin >> test;
    while (test--) {
        cin >> k;
        cin >> str;
        cout << minValue(str, k) << endl;
    }
    return 0;
}
