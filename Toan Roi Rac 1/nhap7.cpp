#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, a[12][12], x[12];
bool ok = false;
vector<vector<string> > res;
void inp(){
    cin >> n;
    for(int i = 1; i <= n; i ++)
        for(int j = 1; j <= n; j ++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i ++) 
        x[i] = i;
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
void Next(){
    int i = n - 1;
    while(x[i] > x[i + 1]) 
        i--;
    if(i == 0) ok = true;
    else{
        int j = n;
        while(x[j] < x[i]) 
            j--;
        swap(x[i], x[j]);
        int d = i + 1, c = n;
        while(d < c){
            swap(x[d], x[c]);
            d ++;
            c --;
        }
    }
}
int main(){
    inp();
    while(!ok){
        Next();
        outp();
    }
    int len = res.size();
    for(int i = 0; i < len; i ++){
        int l = res[i].size();
        for(int j = 0; j < l; j ++)
            cout << res[i][j] << " || ";
        cout << endl;
    }
    return 0;
}