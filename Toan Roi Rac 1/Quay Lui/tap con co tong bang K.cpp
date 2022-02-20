#include<bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
int a[1000] = {0}, b[1000], S, n;
void inp(){
    cin >> S >> n;
    for(int i = 1; i <= n; i ++) cin >> b[i];
}
void outp(){
    vector<int> c;
    int sum = 0;
    for(int i = 1; i <= n; i ++){
        if(a[i] == 1){
            c.push_back(b[i]);
            sum += b[i];
        }
    }
    if(sum == S){
        int len = c.size();
        for(int i = 0; i < len; i ++)
            cout << c[i] << " ";
        cout << endl;
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == n) outp();
        else Try(i + 1);
    }
}
int main(){
    inp();
    Try(1);
    return 0;
}