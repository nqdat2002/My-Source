#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

int v, e;
bool visited[MAX], on_stack[MAX];
vector<int> arr[MAX];

bool isCyclic() {
    stack <int> st;
    memset(on_stack, false, sizeof(on_stack));
    memset(visited, false, sizeof(visited));

    for (int w = 0; w < v; w++) {
        if (visited[w])
            continue;
        st.push(w);

        while (!st.empty()) {
            int s = st.top();

            if (!visited[s]) {
                visited[s] = true;
                on_stack[s] = true;
            }

            else {
                on_stack[s] = false;
                st.pop();
            }

            for (const auto &k : arr[s]) {
                if (!visited[k]) {
                    st.push(k);
                }
                
                else if (on_stack[k]) {
                    return true;
                }
            }
        }
    }
    return false;
}

int main() {
    int t, tmp1, tmp2;
    cin >> t;
    while (t--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();
        
        cin >> v >> e;

        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
			arr[tmp2].push_back(tmp1);
        }

        if (isCyclic())
            cout << "YES\n";
        
        else cout << "NO\n";
    }

    return 0;
}