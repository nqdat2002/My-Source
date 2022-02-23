#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    string str;
    queue <int> q;
    cin >> n;
    cin.ignore();
    while (n--) {
        cin >> str;
        if (str.compare("PUSH") == 0) {
            cin >> x;
            q.push(x);
        }

        else if (str.compare("PRINTFRONT") == 0) {
            if (q.empty())
                cout << "NONE\n";
            
            else 
                cout << q.front() << endl;
        }

        else if (str.compare("POP") == 0) {
            if (!q.empty())
                q.pop();
        }
    }
    return 0;
}
