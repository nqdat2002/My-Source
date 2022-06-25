#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	freopen("1.inp", "r", stdin);
	freopen("1.out", "w", stdout);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int key=0;
		stack<int> stk;
		stk.push(-1);
		for(int i=0;i<n;i++){
			if(s[i]=='(') stk.push(i);
			else {
				stk.pop();
				if(stk.size()>0) key=max(key,i-stk.top());
				if(stk.size()==0) stk.push(i);
			}
		}
		cout<<key<<'\n';
	}
}
