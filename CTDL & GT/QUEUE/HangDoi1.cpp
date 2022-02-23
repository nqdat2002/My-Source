#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, y;
    cin >> t;
    while (t--) {
        queue <int> q;
        cin >> n;
        while (n--) {
            cin >> x;
            switch (x) {
                case 1 : {
                    cout << q.size() << endl;
                    break;
                }
                
                case 2 : {
                    if (q.empty())
                        cout << "YES\n";
                    else 
                        cout << "NO\n";
                    break;
                }

                case 3 : {
                    cin >> y;
                    q.push(y);
                    break;
                }

                case 4 : {
                    if (!q.empty())
                        q.pop();
                    break;
                }

                case 5 : {
                    if (q.empty())
                        cout << "-1\n";
                    
                    else 
                        cout << q.front() << endl;

                    break;
                }

                case 6 : {
                    if (q.empty())
                        cout << "-1\n";
                    
                    else 
                        cout << q.back() << endl;

                    break;
                }
            }
        }
    }
    return 0;
}
