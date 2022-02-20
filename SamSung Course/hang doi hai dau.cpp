#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; deque <int> dq;
    cin >> t; cin.ignore();
    while (t--) {
        string str; cin >> str;
        int x;
        if (str.compare("PUSHFRONT") == 0) {
            cin >> x;
            dq.push_front(x);
        }
        else if (str.compare("PRINTFRONT") == 0) {
            if (dq.empty())
                cout << "NONE" << endl;
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
                cout << "NONE" << endl;   
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