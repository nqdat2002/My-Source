#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m+1];
    memset(b,0,sizeof b);
    b[0] = 1;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if (b[a[i]] == 0){
        	b[a[i]] = 1;
        	for (int j = m; j >= a[i]; j--)
            	if (b[j] == 0 && b[j-a[i]] == 1 && j-a[i] != a[i])
                	b[j] = 1;
        }
        else{
        	for (int j = m; j >= a[i]; j--)
            	if (b[j] == 0 && b[j-a[i]] == 1)
                	b[j] = 1;
        }
    }
    for (int i = m; i >= 0; i--)
        if (b[i] == 1){
            cout<<i;
            return 0;
        }
}
