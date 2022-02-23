#include <bits/stdc++.h>
using namespace std;

queue <int> q[1005];

void tach(string s, int row) {
    int n = s.size(), flag = 0, col = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] != ' ') {
            if (!flag)
                flag = 1;
            col = col * 10 + (s[i] - 48);
        }

        else if (flag == 1) {
            flag = 0;
            q[row].push(col);
            col = 0;
        }

        if (i == n - 1 && col != 0)
            q[row].push(col);
    }
}

int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();

    for (int i = 1; i <= n; i++) {
        s = " ";
        getline(cin, s);
        tach(s, i);
    }

    for (int i = 1; i <= n; i++) {
        while (!q[i].empty()) {
            if (q[i].front() > i) 
                cout << i << " " << q[i].front() << endl;

            q[i].pop();
        }
    }
    return 0;
}