#include<bits/stdc++.h>
using namespace std;
void FileIO(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}
void change(string &s){
    int n = s.length();
    for(int i = 0; i < n; i ++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
}
string del_space(string &a){
    string res = "";
    int n = a.length();
    for (int i = 0; i < n; i ++)
        if (a[i] != ' ')
            res = res + a[i];
    return res;
}
string change1(string b){  
    stack <char> stk;
    stack <int> id;
    int n = b.length(), fre[300];
    memset(fre, 0, sizeof(fre));
    for (int i = 0; i < n; i ++){
        if (b[i] == ')'){
            int mark = 0;
            while (stk.top() != '('){
                char t = stk.top();
                if (t == '+' || t == '-')
                    mark = 1;
                stk.pop();
                id.pop();
            }
            if (mark == 0){
                fre[id.top()] = 1;
                fre[i] = 1;
            }
            stk.pop();
            id.pop();
        }
        else{
            stk.push(b[i]);
            id.push(i);
        }
    }
    string res = "";
    for (int i = 0; i < n; i ++)
        if (fre[i] == 0)
            res = res + b[i];
    return res;
}

string change2(string c)  {
    stack <char> stk;
    stack <int> id;
    int n = c.length(), fre[300];
    memset(fre, 0, sizeof(fre));
    for (int i = n - 1; i >= 0; i --){
        if (c[i] == '('){
            int mark = 1;
            if (i == 0 || c[i - 1] != '-')
                mark = 0;
            while (stk.top() != ')'){
                stk.pop();
                id.pop();
            }
            if (mark == 0){
                fre[id.top()] = 1;
                fre[i] = 1;
            }
            stk.pop();
            id.pop();
        }
        else{
            stk.push(c[i]);
            id.push(i);
        }
    }
    string res = "";
    for (int i = 0; i < n; i ++)
        if (fre[i] == 0)
            res = res + c[i];
    return res;
}
int main (){
    FileIO();
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string str = ""; 
        getline(cin, str);
        string s1 = del_space(str);
        string s2 = change1(s1);
        string s3 = change2(s2);
        cout << s3 << endl;
    }
    return 0;
}