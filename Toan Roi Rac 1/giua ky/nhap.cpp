#include <bits/stdc++.h>
using namespace std;
int x[10], a[10], n = 4, mx = -1e6;
vector<vector<int> > res;
int Sum(vector<int> &x){
    return 5*x[0] + 1*x[1] + 8*x[2] + 1*x[3];
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        x[i] = j;
        if(i == n){
            if(4*x[1] + 2*x[2] + 7*x[3] + 1*x[4] <= 9){
                vector<int> c;
                for(int i = 1; i <= n; i ++)
                    c.push_back(x[i]);
                res.push_back(c);
            }
        }
        else Try(i + 1);
    }
}
int main(){
    memset(x, 0, sizeof(x));
    Try(1);
    int l = res.size(), id = 0;
    for(int i = 0; i < l; i ++){
        if(Sum(res[i]) > mx){
            mx = Sum(res[i]);
            id = i;
        }
    }
    cout << mx << endl;
    for(int i = 0; i < res[id].size(); i ++)
        cout << res[id][i] << " ";
    cout << endl;
    return 0;
}