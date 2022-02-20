#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
#define mod 1000000007
#define ll long long
ll N,W,w[109],v[109];
ll dp[109][100009];
ll solve(int id,int wt){
	if(id==N) return 0;
	if(dp[id][wt]!=-1)
		return dp[id][wt];
	ll ans=solve(id+1,wt);
	if(w[id]+wt<=W)
	ans=max(ans,solve(id+1,wt+w[id])+v[id] );
	return dp[id][wt]=ans;
}
int main(){
	memset(dp,-1,sizeof(dp));
	cin>>N>>W;
	for(int i=0;i<N;i++){
		cin>>w[i]>>v[i];
	}
	cout<<solve(0,0)<<endl;
	return 0;
}
