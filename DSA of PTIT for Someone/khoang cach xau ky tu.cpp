#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void bfs(string s, string t, int n){
    unordered_set<string> us;
    unordered_map<string, int> ump;
    for(int i = 0; i < n; i ++){
        string a; cin >> a; 
        us.insert(a);
        ump[a] = 0;
    }
    queue<string> q;
    q.push(s);
    ump[s] = 1;
    while(!q.empty()){
        string a = q.front(); q.pop();
        if(a == t){
            cout << ump[t] << endl;
            return;
        }
        for(int i = 0; i < a.size(); ++i){
            string b = a;
            for(char x = 'A'; x <= 'Z'; ++x){
                b[i] = x;
                if(us.find(b) != us.end() && ump[b] == 0){
                    ump[b] = ump[a] + 1;
                    q.push(b);
                }
            }
        }
    }
    
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s, t; cin >> s >> t;
        bfs(s, t, n);
    }
    return 0;
} 