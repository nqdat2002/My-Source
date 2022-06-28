#include <bits/stdc++.h>
using namespace std;
int main(){
    long long sum = 0;
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        if(x >= 0) sum += x;
    }
    cout << sum * 2 << endl;
}
