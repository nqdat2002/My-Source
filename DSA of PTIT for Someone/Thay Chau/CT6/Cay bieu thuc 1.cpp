#include <bits/stdc++.h>
using namespace std;
string s, tmp;
deque <string> st;
int main(){
    int t; cin >> t;
    while (t--){
        cin >> s;
        for(int i = 0; i < s.size(); ++i){
            tmp = "";
            if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
                if(!st.empty()){
                    tmp = tmp + st.back();
                    st.pop_back();
                }
                tmp = s[i] + tmp;
                if(!st.empty()){
                    tmp = st.back() + tmp;
                    st.pop_back();
                }
            }
            else tmp = tmp + s[i];
            st.push_back(tmp);
        }
        while (!st.empty()){
            cout << st.front();
            st.pop_front();
        }
        cout << endl;
    }
    return 0;
}