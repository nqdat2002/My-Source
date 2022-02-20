#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ans;
    int cnt = 0;
    for(int i = 1; i <= 10000; i ++){
        if(i % 3 != 0 && i % 4 != 0 && i % 7 != 0){
            cnt ++;
            ans.push_back(i);
        }
    }
    int l = ans.size();
    cout << cnt << endl;
    int x = 0;
    for(int i = 0; i < l; i ++){
        cout << ans[i] << " ";
        x++;
        if(x % 10 == 0) cout << endl;
    }
    cout << l << endl;
    return 0;
}