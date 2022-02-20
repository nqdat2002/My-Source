#include <bits/stdc++.h>
using namespace std;
bool tim(int a[], int l, int r, int k){
    while(l<=r){
        int m=(l+r)/2;
        if (a[m]==k)
            return 1;
        else if(a[m]>k)
            r=m-1;
        else
            l=m+1;
    }
    return 0;
}
int main(){
    int m,n;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <=m; i++)
        cin >> b[i];
    for(int i = 1; i <=m; i++){
        if (tim(a, 1, n , b[i])){
        	for(int j=1;j<=n;j++)
        	if(a[j]==b[i]) {
				cout<<j<<' ';
				break;
			}
		}
            
        else
            cout <<0<<' ';
    }
    return 0;
}
