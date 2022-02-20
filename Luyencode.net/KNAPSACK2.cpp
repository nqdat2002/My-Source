#include<bits/stdc++.h>
#include<vector>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
#define mod 1000000007
#define ll long long
ll n,w,a[100009],b[100009];
ll dp[109][100009];
ll solve(int r,int idx){
	if(idx==n) return r ==0 ? 0 : INT_MAX;
	if(dp[idx][r]!=-1)
		return dp[idx][r];
	ll ans=solve(r,idx+1);
	if(b[idx]<=r)
	ans=min(ans,a[idx]+solve(r-b[idx],idx+1));
	return dp[idx][r]=ans;
}
int s(int v_max){
	for(int i=v_max;i>=0;i--){
		if(solve(i,0)<=w)
		return i;
	}
	return 0;
}
int main(){
	memset(dp,-1,sizeof(dp));
	cin>>n>>w;
	int v_max=0;
	for(int i=0;i<n;i++){
		cin>> a[i]>>b[i];
		v_max+=b[i];
	}
	cout<<s(v_max)<<endl;
	return 0;
}
