#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int m,n,k;
        cin>>m>>n>>k;
        int a[m],b[n],c[m+n];
        for(int i=1;i<=m;i++){
        	cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=1;i<=m+n;i++){
			if(i<=m) c[i]=a[i];
			else c[i]=b[i-m];
		}
		sort(c+1,c+m+n+1);
		cout<<c[k]<<endl;
    }
    return 0;
}
