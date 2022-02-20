#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int n, m, a;
    stack<int> st;
    cin >> n >> m;
    while (m--) {
        while (st.size() < (n + 1) / 2) {
            cin >> a;
            st.push(a);
        }
        cout << st.top() << " ";
        st.pop();
        n--;
    }
    return 0;
}