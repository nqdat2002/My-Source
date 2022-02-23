#include <bits/stdc++.h>
using namespace std;

int isPossible(string str, int d) {
    // Mang chua so lan xuat hien cua moi phan tu
    map<char, int> freq;

    // Ghi nhan so lan xuat hien lon nhat
    int max_freq = 0;

    for (int j = 0; j < (str.length()); j++) {
        freq[str[j]]++;
        if (freq[str[j]] > max_freq)
            max_freq = freq[str[j]];
    }
    int res = str.length() / (d-1);
    if (max_freq < res)
        return true;

    return false;
}

int main() {
    int test, d;
    string str;
    cin >> test;
    while (test--) {
        cin >> d;
        cin >> str;
        if (isPossible(str, d))
            cout << "1";
        else 
            cout << "-1";

        cout << endl;
    }
    return 0;
}
