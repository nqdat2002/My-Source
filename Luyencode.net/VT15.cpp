#include <bits/stdc++.h>
using namespace std;
#define mx 10005
//tham khao
int main(){
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