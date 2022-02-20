#include <bits/stdc++.h>
using namespace std;
vector<vector<int> > res;
int n, a[100];
int Fn(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    if(n == 3) return 5;
    return Fn(n - 1) + Fn(n - 2);
}
bool ck(vector<int> &x){
    int l =  x.size();
    for(int i = 0; i < l - 1; i ++)
        if(x[i] == 1 && x[i + 1] == 1)
            return false;
    return true;
}
void outp(){
    vector<int> t;
    for(int i = 1; i <= n; i ++)
        t.push_back(a[i]);
    if(ck(t)){
        for(int i = 0; i < n; i ++)
            cout << t[i] << " ";
        cout << endl;
        res.push_back(t);
    }
    t.clear();
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == n) outp();
        else Try(i + 1);
    }
}
int main(){
	res.clear();
    cin >> n;
    cout << Fn(n) << endl;
    Try(1);
    cout << res.size() << endl;
}