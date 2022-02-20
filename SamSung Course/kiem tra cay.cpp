#include <bits/stdc++.h>
using namespace std;
int n, m, u;
bool chuaxet[1005];
vector<int> List[1005];
void dfs(int u){
	chuaxet[u] = false;
    for(int i = 0; i < List[u].size(); i ++){
		int v = List[u][i];
		if(chuaxet[v])
			dfs(v);
	}
}
int main(){
	int t, u, x, y, i;
    cin >> t;
    while(t--){
    	memset(chuaxet, true, sizeof(chuaxet));
    	for(i = 0; i < 1005; i ++) List[i].clear();
    	cin >> n;
    	for(i = 1; i < n; i ++){
    		cin >> x >> y;
    		List[x].push_back(y);
    		List[y].push_back(x);
    	}	
        dfs(1);
        bool check = true;
        for(int i = 2; i <= n; i ++){
            if(chuaxet[i]) 
                check = false;
        }
        cout << ((check) ? "YES" : "NO") << endl;
    }
	return 0;
}