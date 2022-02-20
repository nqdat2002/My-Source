#include<bits/stdc++.h>
#include<iostream>
#include<map>
using namespace std;
//nxbac
int n;
vector<int> adj[100005];
int f[100005], mx[100005];
void dist(int u) {
    if (f[u] > -1) return ;
    f[u] = 0;
    int mx1 = 0, mx2 = 0;
    for (int v : adj[u]) if (f[v] == -1) {
        dist(v);
        mx[u] = max(mx[u], mx[v]);
        if (mx[v] + 1 > mx1) {
            mx2 = mx1;
            mx1 = mx[v] + 1;
        } else if (mx[v] + 1 > mx2)  mx2 = mx[v] + 1;
    }
    f[u] = mx1 + mx2;
    mx[u] = mx1;
}
int main() {
    memset(f,-1, sizeof f);
    cin >> n;
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dist(1);
    for (int i = 1; i <= n; i++) cout << f[i] << ' ';

    return 0;
}
