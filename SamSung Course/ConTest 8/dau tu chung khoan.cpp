#include <bits/stdc++.h>
using namespace std;
void Solve(int price[], int res[], int n) {
    stack <int> stk;
    stk.push(0);
    res[0] = 1;
    for (int i = 1; i < n; i++) {
        while (!stk.empty() && price[stk.top()] <= price[i])
            stk.pop();
        if (stk.empty())
            res[i] = i + 1;  
        else 
            res[i] = i - stk.top();
        stk.push(i);
    }
    for (int i = 0; i < n; i++)
        cout << res[i] << " ";  
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], res[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solve(a, res, n);
    }
    return 0;
}