#include <bits/stdc++.h>
using namespace std;
int n, a[10], x[5] = {0, 1, 5, 8, 9};
bool ck[100];
vector<vector<int> > ans;
void outp(){
    if(x[a[1] - 1] != 0){
        vector<int> c;
        for(int i = 1; i <= n; i++){
            cout << x[a[i] - 1];
            c.push_back(x[a[i] - 1]);
        }
        cout << " ";
        ans.push_back(c);
    }
}
void Try(int i){
    for(int j = 1; j <= n; j ++){
        if(!ck[j]){
            a[i] = j;
            ck[j] = true;
            if(i == n) outp();
            else Try(i + 1);
            ck[j] = false;
        }
    }
}
int main(){
    n = 5;
    cout << 4 * 4 * 3 * 2 << endl;
    Try(1);
    cout << endl;
    cout << ans.size() << endl;
    return 0;
}