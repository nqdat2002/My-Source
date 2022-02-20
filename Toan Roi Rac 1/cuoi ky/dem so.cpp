#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int cnt = 0;
    for(int i = 100; i <= 200; i ++){
        if(i % 2 == 0 || i % 6 == 0 || i % 2 == 4){
            cnt ++;
            ans.push_back(i);
        }
    }
    int l = ans.size();
    // in so thoa man
    // cout << cnt << endl;
    // int x = 0;
    // for(int i = 0; i < l; i ++){
    //     cout << ans[i] << " ";
    //     x++;
    //     if(x % 10 == 0) cout << endl;
    // }
    // cout << endl;
    cout << l << endl;
    return 0;
}