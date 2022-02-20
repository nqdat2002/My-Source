#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX_CHAR = 26;
ll minValue(string str, ll k) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    ll l = str.length();
    if (k >= l)
        return 0;
    ll freq[MAX_CHAR] = {0};
    for (int i = 0; i < l; i++)
        freq[str[i] - 'a']++;
    priority_queue<ll> q;
    for (ll i = 0; i < MAX_CHAR; i++)
        q.push(freq[i]);
    while (k--) {
        ll temp = q.top();
        q.pop();
        temp --;
        q.push(temp);
    }
    ll result = 0;
    while (!q.empty()) {
        ll temp = q.top();
        result += (ll)temp * temp;
        q.pop();
    }
    return result;
}
int main() {
   	ll test, k;
    string str;
    cin >> test; cin.ignore();
    while (test--) {
        cin >> k; cin.ignore();
        cin >> str;
        cout << minValue(str, k) << endl;
    }
    return 0;
}
