#include<bits/stdc++.h>
using namespace std;
int lcs(string &a, string &b) {
    int m = a.size(), n = b.size();
    a = ' ' + a;
    b = ' ' + b;
    vector< vector<int> > f(m+1, vector<int>(n+1, 0));

    for (int i=1; i<=m; i++) for (int j=1; j<=n; j++) {
        if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j], f[i][j-1]);
    }
    return f[m][n];
}
int solve(string s){
    string new_s;
    for(int i=s.length()-1;i>=0;i--) new_s+=s[i];
    return lcs(s,new_s);
}
int main(){
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
