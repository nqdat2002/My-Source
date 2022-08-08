#include <bits/stdc++.h>
#define MOD 1000000007
#define base 31
#define Pi 3.141592654
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int N = 1000011;
typedef map<int, int> mii;
typedef vector<int> vti;

ll a[N];

main() {
    while (1) {
        int n;
        cin >> n;
        if (n == 0)
            break;
        stack<int> s1, s;
        bool oo = 1;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        int id = 1;

        for (int i = 1; i <= n; i++) {
            if (a[i] == id) {
                id += 1;

                if (!s.empty() && s.top() == id) {
                    while (1) {
                        if (s.empty())
                            break;
                        else {
                            if (s.top() != id)
                                break;
                            else {
                                s.pop();
                                id += 1;
                            }
                        }
                    }
                }
                continue;
            } else
                s.push(a[i]);
        }

        if (s.empty())
            cout << "yes\n";
        else
            cout << "no\n";
    }

    return 0;
}
