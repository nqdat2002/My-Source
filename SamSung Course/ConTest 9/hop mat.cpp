#include <bits/stdc++.h>
using namespace std;
int N, M, K;
vector <int> p;
vector <int> r[1003];
int cnt[1003];
void input(){
	cin >> K >> N >> M;
	int ps;
	for (int i=1; i<=K; i++){
		cin >> ps;
		p.push_back(ps);
	}
	for (int i=1; i<=M; i++){
		int A, B;
		cin >> A >> B;
		r[A].push_back(B);
	}
	for (int i=1; i<=N; i++) cnt[1003];
}
int check[1003];
void init (){
	for (int i=1; i<=N; i++)
		check[i]=0;
}
void dq(int u){
	for (int i=0; i < r[u].size(); i++){
		int v=r[u][i];
		if (check[v]==0){
			check[v]=1;
			cnt[v]++;
			dq(v);
		}
	}
}
int main (){
	input();
	for (int i=0; i < p.size(); i++){
		init ();
		check[p[i]]=1;
		cnt[p[i]]++;
		dq(p[i]);
	}
	int res = 0;
	for (int i=1; i<=N; i++){
		if (cnt[i] == K) res ++;
	}
	cout << res << endl;
	return 0;
}