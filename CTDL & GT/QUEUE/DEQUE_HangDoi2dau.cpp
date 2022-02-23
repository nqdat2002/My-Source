#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    string str;
    deque <int> dq;
    cin >> n;
    cin.ignore();
    while (n--) {
        cin >> str;

        if (str.compare("PUSHFRONT") == 0) {
            cin >> x;
            dq.push_front(x);
        }

        else if (str.compare("PRINTFRONT") == 0) {
            if (dq.empty())
                cout << "NONE\n";
            
            else 
                cout << dq.front() << endl;
        }

        else if (str.compare("POPFRONT") == 0) {
            if (!dq.empty())
                dq.pop_front();
        }

        else if (str.compare("PUSHBACK") == 0) {
            cin >> x;
            dq.push_back(x);
        }

        else if (str.compare("PRINTBACK") == 0) {
            if (dq.empty())
                cout << "NONE\n";
            
            else 
                cout << dq.back() << endl;
        }

        else if (str.compare("POPBACK") == 0) {
            if (!dq.empty())
                dq.pop_back();
        }
    }
    return 0;
}
