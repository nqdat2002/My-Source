#include <bits/stdc++.h>
using namespace std;
bool Finz(vector<int> &c){
    int n = c.size();
    int cnt = 0;
    for(int i = 0; i < n; i ++){
        if(c[i] == 1)
            cnt ++;
    }
    return (cnt == 0) ? true : false;
} 
int n, m, u;
bool chuaxet[1005];
vector<int> List[1005];
vector<int> res;
void dfs(int u){
	chuaxet[u] = false;
    res.push_back(u);
    for(int i = 0; i < List[u].size(); i ++){
		int v = List[u][i];
		if(chuaxet[v])
			dfs(v);
	}
}
int main(){
	int t, u, x, y, i;
	memset(chuaxet, true, sizeof(chuaxet));
	for(i = 0; i < 1005; i ++) List[i].clear();
	cin >> n >> m;
	for(i = 1; i <= m; i ++){
		cin >> x >> y;
		List[x].push_back(y);
		List[y].push_back(x);
	}	
    res.clear();
    int mark = 0;
    for(i = 1; i <= n; i ++){
        if(chuaxet[i]){
            dfs(i);
            if(Finz(res)){
                mark = 1;
                sort(res.begin(), res.end());
                for(int i = 0; i < res.size(); i ++)
                    cout << res[i] << endl;
            }
            res.clear();
        }
    }
    if(mark == 0) 
        cout << 0 << endl;
	return 0;
}