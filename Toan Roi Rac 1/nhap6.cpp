#include <bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int a[35][35], n, m, k, c[15];
bool ok = false;
vector<vector<int> > res;
int sum(vector<int> &x){
    int s = 0, n = x.size();
    for(int i = 0; i < n; i ++) s += x[i];
    return s;
}
void inp(){
    cin >> m >> n;
    for(int i = 1; i <= m; i ++)
        for(int j = 1; j <= n; j ++) cin >> a[i][j];
}

void outp(){
    vector<int> t;
    for(int j = 1; j <= n; j ++){
        int s = 0;
        for(int i = 1; i <= k; i ++) 
            s += a[c[i]][j];
        if(s == 1 || s == 0)
            t.push_back(s);
        else return;
    }
    if(sum(t) == 14){
        vector<int> ans(m, 0);
        for(int i = 1; i <= k; i ++) 
        	ans[c[i] - 1] = 1;
        ans.clear();
        res.push_back(ans);
    }
    t.clear();
}
void Next(){
    int i = k;
    while(c[i] == m - k + i)
        i --;
    if(i == 0) ok = true;
    else{
        c[i] ++;
        for(int j = i + 1; j <= k; j ++)
            c[j] = c[i] + j - i;  
    }
}
void Try(int i){
    for(int j = c[i - 1] + 1; j <= m - k + i; j ++){
        c[i] = j;
        if(i == k) outp();
        else Try(i + 1);
    }
}
int main(){
	FileIO();
    inp();
    res.clear();
//    for(int i = 1; i <= m; i ++){
//        k = i;
        ok = false;
        k = 5;
        for(int j = 1; j <= k; j ++) 
        	c[j] = j;
   		while(!ok){
   			outp();
   			Next();
   		}
//    }
    int len = res.size();
    sort(res.begin(), res.end());
    for(int i = 0; i < len; i ++){
        int l = res[i].size();
        for(int j = 0; j < l; j ++)
            cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}


