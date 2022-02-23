#include <bits/stdc++.h>
using namespace std;
bool cmp(const int a,const int b){
	return a>b; 
} 
int main(){
	int n;
	cin>>n;
	int a[n+1];
	int le[n];
	int chan[n];
	int dle=0,dchan=0; 
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i%2==1){
			le[dle]=a[i];
			dle++; 
		} 
		if(i%2==0){
			chan[dchan]=a[i];
			dchan++; 
		} 
	}
	sort(le,le+dle);
	sort(chan,chan+dchan,cmp);
	for(int i=1;i<=n;i++){
		if(i%2==1) cout<<le[i/2]<<" ";
		else cout<<chan[i/2-1]<<" "; 
	} 
} 
