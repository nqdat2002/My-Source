#include<bits/stdc++.h>

using namespace std;
int n, k, save[10]={}, check[10]={}, mn=1000000000;
string str[10];
set<int> st;

void solve(){
	for(int i= 0; i< n;i++){
		string s;
		for(int j=0;j<k;j++){
			s+=str[i][save[j]];
		}
		st.insert(stoi(s));
	}
	int tmp=*st.rbegin()-*st.begin();
	mn=min(mn,tmp);
	st.clear();
}

void Try(int i){
	for(int j=0;j<k;j++){
		if(check[j]==0){
			check[j]=1; save[i]=j;
			if(i==k-1) solve();
			else Try(i+1);
			check[j]=0;
		}
	}
}

int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> str[i];
	} 	
	Try(0);
	cout << mn;
	return 0;
}
