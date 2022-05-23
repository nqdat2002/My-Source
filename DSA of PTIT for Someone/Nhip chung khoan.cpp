#include <bits/stdc++.h>
using namespace std;
void result(int price[], int res[], int n) {
    stack <int> st;
    st.push(0);
    res[0] = 1;
    for (int i = 1; i < n; i++) {
        while (!st.empty() && price[st.top()] <= price[i])
            st.pop();
        if (st.empty())
            res[i] = i + 1;    
        else 
            res[i] = i - st.top();
        st.push(i);
    }
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";
    cout << endl;
}
int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n], res[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        result(arr, res, n);
    }
    return 0;
}
