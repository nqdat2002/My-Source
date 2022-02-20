#include <bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,v1,v2;
		int i=0;
		cin>>a>>v1>>b>>v2;
		int m=a,n=b;
		while(a!=b){
			a=a+v1;
			b=b+v2;
			if(a==b)
			{
				cout<<"YES"<<'\n';
				break;
			}	
			else if(b-a<=n-m) continue;
			else if(b-a>n-m)
			{	
				cout<<"NO"<<'\n';
				break;
			}
		}
	}
	return 0;
}
