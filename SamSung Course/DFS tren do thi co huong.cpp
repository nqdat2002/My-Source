#include <bits/stdc++.h>
using namespace std;
/* stack
#define MAX 1005
bool chuaxet[MAX];
vector<int> arr[MAX];
void dfs(int u) {
    memset(chuaxet, true, sizeof(chuaxet));
    int i, x, y;
    stack<int> st;
    st.push(u);
    cout << u << " ";
    chuaxet[u] = false;
    while (!st.empty()) {
        x = st.top(); st.pop();
        for (i = 0; i < arr[x].size(); i++) {
            y = arr[x][i];
            if (chuaxet[y]) {
                cout << y << " ";
                chuaxet[y] = false;
                st.push(x);
                st.push(y);
                break;
            }
        }
    }
    cout << endl;
}
int main() {
    int t, v, e, u, tmp1, tmp2;
    cin >> t;
    while (t--) {
        for (int i = 0; i < MAX; i++)
            arr[i].clear();      
        cin >> v >> e >> u;
        for (int i = 0; i < e; i++) {
            cin >> tmp1 >> tmp2;
            arr[tmp1].push_back(tmp2);
            arr[tmp2].push_back(tmp1);
        }
        dfs(u);
    }
    return 0;
}
*/
int n, m, u;
bool chuaxet[1005];
vector<int> List[1005];
void dfs(int u){
	chuaxet[u] = false;
	cout << u << " ";
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
		memset(chuaxet, true,sizeof(chuaxet));
		for(i = 0; i < 1005; i ++) List[i].clear();
		cin >> n >> m >> u;
		for(i = 1; i <= m; i ++){
			cin >> x >> y;
			List[x].push_back(y);
		//	List[y].push_back(x);
		}	
		dfs(u);
		cout << endl;
	}
	return 0;
}