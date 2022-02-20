#include <bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
string s = "";
vector<string> res;
int n, k, a[100];
void outp(){
    for(int l = 1; l <= n - k; l ++){
        if(l == 1 && a[l] == 1){
            string tmp = "";
            tmp = tmp + s;
            for(int p = 1; p <= n - k; p ++){
                if(a[p] == 0) tmp = tmp + "1";
                else tmp = tmp + "0";
            }
            res.push_back(tmp);
        }
        if(l == n - k && a[l] == 1){
            string tmp = "";
            for(int p = 1; p <= n - k; p ++){
                if(a[p] == 0) tmp = tmp + "1";
                else tmp = tmp + "0";
            }
            tmp = tmp + s;
            res.push_back(tmp);
        }
        if(l > 1 && a[l] && a[l - 1]){
            string tmp = "";
            for(int p = 1; p <= n - k; p ++){
                if(p == l) tmp = tmp + s;
                if(a[p] == 0) tmp = tmp + "1";
                else tmp = tmp + "0";
            }
            res.push_back(tmp);
        }
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == n - k) outp();
        else Try(i + 1);
    }
}
int main(){
    cin >> k >> n;
    for(int i = 0; i < k; i ++) s = s + "1";
    Try(1);
    sort(res.begin(), res.end());
    int l = res.size();
    for(int i = 0; i < l; i ++){
        int len = res[i].size();
        for(int j = 0; j < len; j ++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}