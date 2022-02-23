#include <bits/stdc++.h>
using namespace std;

void printStack(stack <int> s) {
    if (s.empty())
        return;

    int x = s.top();

    s.pop();

    printStack(s);

    cout << x << " ";

    s.push(x);
}

int main() {
    stack <int> s;
    string str;
    int n;
    do
    {
        cin >> str;
        if (str.compare("push") == 0) {
            cin >> n;
            s.push(n);
        }

        else if (str.compare("pop") == 0) {
            if (!s.empty()) {
                s.pop();
            }

            else {
                cout << "empty\n";
                break;
            }
        }

        else if (str.compare("show") == 0) {
            if (!s.empty()) {
                printStack(s);
                cout << endl;
            }
            
            else {
                cout << "empty\n";
                break;
            }
        }
    } while (1);

    return 0;
}
