#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
	cin >> n;
    vector<int> a, b;
    for(int i = 1; i <= n; i ++){
        int x; cin >> x;
        if(i % 2 == 1) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 1; i <= n; i ++){
        if(i % 2 == 0){
            cout << b.back() << " ";
            b.pop_back();
        }
        else {
            cout << a.front() << " ";
            a.erase(a.begin(), a.begin() + 1);
        }
    }
    cout << endl;
    return 0;
}
