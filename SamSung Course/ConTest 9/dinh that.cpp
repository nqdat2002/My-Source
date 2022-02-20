#include <bits/stdc++.h>
using namespace std;
int N, M, u, v;
vector <int> r[102];
void input(){
	cin >> N >> M >> u >> v;
	for (int i = 1; i <= M; i ++){
		int A, B;
		cin >> A >> B;
		r[A].push_back(B);
	}
}
int check[102], mark[102];
void reset(){
	for (int i=1; i<=N; i++)
	{
		check[i]=0;
		mark[i]=1;
	}
}
void find_similar (){
	for (int i = 1; i <= N; i ++)
	{
		if (check[i] == 1 && mark[i] == 1)
			mark[i] = 1;
		else 
			mark[i] = 0;
	}
}
 
void DQ_QL (int x, int End){
	if (x == End)
		find_similar ();
	else{
		for (int i = 0; i < r[x].size(); i ++){
			int v = r[x][i];
			if (check[v] == 0){
				check[v] = 1;
				DQ_QL(v, End);
				check[v] = 0;
			}
		}
	}
}
 
int main (){
	int t; cin >> t;
	while (t--){
		input();
		reset();
		check[u] = 1;
		DQ_QL (u, v);
		check[u] = 0;
		int cnt = 0;
		for (int i=1; i<=N; i++){
			if (i != u && i != v && mark[i] == 1) 
				cnt++;
		}
		cout << cnt << endl;
		for (int i = 1; i <= 100; i++) 
			r[i].clear();
	}
	return 0;
}