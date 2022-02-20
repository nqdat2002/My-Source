#include<bits/stdc++.h>
using namespace std;
// m bit 1 lien tiep
int n, k , a[100] = {0};
bool ok = false;
vector<string> res;
bool check(vector<int> &a, int n, int m){
    int mark = 0;
    for(int i = 0; i < n; i ++){
        int cnt = 0;
        if(a[i] == 1){
            for(int j = i; j < m + i && j < n; j ++)
                if(a[i] == a[j]) cnt ++;
        }
        if(cnt == m) mark = 1;
    }
    if(mark == 1) 
        return true;
    return false;
}
void outp(){
    vector<int> c;
    for(int i = 1; i <= n; i ++) c.push_back(a[i]);
    if(check(c, n, k)){
        string tmp = "";
        for(int j = 0; j < n; j ++){
            if(c[j] == 1) tmp = tmp + "A";
            else tmp = tmp + "B";
        }
        res.push_back(tmp);
    }
}
void next(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = true;
    else a[i] = 1;
}
int main(){
    cin >> k >> n;
    while(!ok){
        outp();
        next();    
    }
    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());
    int len = res.size();
    for(int i = 0; i < len; i ++){
        int x = res[i].size();
        for(int j = 0; j < x; j ++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}