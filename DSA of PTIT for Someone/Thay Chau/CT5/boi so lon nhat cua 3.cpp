#include <bits/stdc++.h>
using namespace std;
void Solve(){
    int n; cin >> n;
    vector<int> a;
    priority_queue<int, vector<int>, greater<int> > q1, q2;
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        int x; cin >> x;
        sum += x;
        if(x % 3 == 0) a.push_back(x);
        else if(x % 3 == 1) q1.push(x);
        else q2.push(x);
    }
    if(sum % 3 == 1){
        if(q1.size() >= 1) q1.pop();
        else if(q2.size() >= 2){
            q2.pop(); q2.pop();
        }
        else {
            cout << -1;
            return;
        }
    }
    if(sum % 3 == 2){
        if(q2.size() >= 1) q2.pop();
        else if(q1.size() >= 2){
            q1.pop(); q1.pop();
        }
        else {
            cout << -1;
            return;
        }
    }
    while(!q1.empty()){ a.push_back(q1.top()); q1.pop(); }
    while(!q2.empty()){ a.push_back(q2.top()); q2.pop(); }
    if(!a.size()) cout << -1;
    else{
        sort(a.begin(), a.end(), greater<int>());
        for(auto x: a) cout << x;
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        Solve();
    }
    return 0;
} 