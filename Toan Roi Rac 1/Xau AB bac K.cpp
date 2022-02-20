#include <bits/stdc++.h>
using namespace std;
void FileIO(){
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
string s = "";
vector<string> b;
int n, k, a[100];
void Try(int i){
    for(int j = 0; j <= 1; j ++){
        a[i] = j;
        if(i == n - k){
            for(int l = 1; l <= n - k; l ++){
                if(l == 1 && a[l] == 1){
                    string res = "";
                    res = res + s;
                    for(int p = 1; p <= n - k; p ++){
                        if(a[p] == 0) res = res + "A";
                        else res = res + "B";
                    }
                    b.push_back(res);
                }
                if(l == n - k && a[l] == 1){
                    string res = "";
                    for(int p = 1; p <= n - k; p ++){
                        if(a[p] == 0) res = res + "A";
                        else res = res + "B";
                    }
                    res = res + s;
                    b.push_back(res);
                }
                if(a[l] && a[l - 1] && l > 1){
                    string res = "";
                    for(int p = 1; p <= n - k; p ++){
                        if(p == l) res = res + s;
                        if(a[p] == 0) res = res + "A";
                        else res = res + "B";
                    }
                    b.push_back(res);
                }
            }
        }
        else Try(i + 1);
    }
}
int main(){
	FileIO();
    cin >> n >> k;
    for(int i = 0; i < k; i ++) s = s + "A";
    Try(1);
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
    for(int i = 0; i < b.size(); i ++){
        for(int j = 0; j < b[i].size(); j ++)
            cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
