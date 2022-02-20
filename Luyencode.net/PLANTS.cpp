#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,j;
	while(t--){
		cin>>n;
		int h=1,i=0;
		for(i=0;i<=n;i++){
			if(i%2!=0) h=h*2;
			else {
				if(i==0) h=h+0;
				else h=h+1;}
		}
		cout<<h<<'\n';
		
	}
	return 0;
	}
	
