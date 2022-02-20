#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, a[12][12], x[12];
bool check[100];
vector<vector<string> > res;
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i ++)
        for(int j = 1; j <= n; j ++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i ++) 
        x[i] = i;
    memset(check, false, sizeof(check));
}
void outp(){
    int s = 0;
    for(int j = 1; j <= n; j ++)
            s += a[j][x[j]];
    if(s == 10){
        vector<string> ans;
        for(int i = 1; i <= n; i ++){
            ans.push_back("Man" + to_string(i) + "->" + "Job" + to_string(x[i]));
        }
        res.push_back(ans);
    }
}
void Try(int i){
    for(int j = 1; j <= n; j ++){
        if(!check[j]){
            x[i] = j;
            check[j] = true;
            if(i == n) outp();
            else Try(i + 1);
            check[j] = false;
        }
    }
}
int main(){
    inp();
    Try(1);
    int len = res.size();
    for(int i = 0; i < len; i ++){
        int l = res[i].size();
        for(int j = 0; j < l; j ++)
            cout << res[i][j] << " || ";
        cout << endl;
    }
    return 0;
}