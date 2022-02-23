#include <bits/stdc++.h>
using namespace std;

string s;
int n, k, stop;

int test() {
    int c = 0, dem0 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            dem0++;
            if (dem0 >= k)
                c++;
        }
        else 
            dem0 = 0;
    }
    if (c == 1)
        return 1;
    return 0;
}

void next() {
    int i = n - 1;
    while (s[i] == 'B') {
        s[i] = 'A';
        i--;
    }
    if (i >= 0)
        s[i] = 'B';
    else 
        stop = 1;
}

int main() {
    vector<string> res;
    cin >> n >> k;
    stop = 0;
    for (int i = 0; i < n; i++)
        s.push_back('A');
    while (!stop) {
        if (test())
            res.push_back(s);
        next();
    }
    cout << res.size() << endl;

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;

    return 0;
}
