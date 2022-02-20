#include<bits/stdc++.h>
// PTIT/users/hoaf13
using namespace std;
 
typedef vector<int> vi; 
vector<vi> edge(100005);
vector<bool> visited(100005,false);
int dfs(int u){
    int ans = 1;
    visited[u] = true;
    for(int i=0;i<edge[u].size();i++){
        if (visited[edge[u][i]] == false){
            ans += dfs(edge[u][i]);
        }
    }
    return ans;  
}
void process(){
    for(int i=1;i<100005;i++){
        edge[i].clear();
        visited[i] = false;
    }
    int n,m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }    
    int res = 0;
    for(int i=1;i<=n;i++){
        if (visited[i] == false){
            res = max(res , dfs(i));
        }
    }
    cout << res << endl;
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    while(T--) process();
 
    return 0;
}