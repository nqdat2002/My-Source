#include <bits/stdc++.h>
using namespace std;
#define mx 10005
int main(){
	freopen("test1.inp", "r", stdin);
	freopen("test1.out", "w", stdout);
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
	}
    sort(b,b+n);
	cout<<max(b[0]*b[1],b[n-3]*b[n-2])*b[n-1];
	return 0;
}
