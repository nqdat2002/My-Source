#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> m >> n;
    int a[n], b[m + 1];
    memset(b, 0, sizeof b);
    b[0] = 1;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (b[a[i]] == 0){
        	b[a[i]] = 1;
        	for (int j = m; j >= a[i]; j--)
            	if (b[j] == 0 && b[j - a[i]] == 1 && j - a[i] != a[i])
                	b[j] = 1;
        }
        else{
        	for (int j = m; j >= a[i]; j--)
            	if (b[j] == 0 && b[j - a[i]] == 1)
                	b[j] = 1;
        }
    }
    for (int i = m; i >= 0; i--)
        if (b[i] == 1){
            cout << i;
            return 0;
        }
}
/*
#include <bits/stdc++.h>
using namespace std;
int n, k, a[101], L[101][25001]; 
int klbo(){
	memset(L, 0, sizeof(L)); 
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= k; j ++){
			if(j >= a[i] && L[i - 1][j - a[i]] + a[i] > L[i - 1][j]) 
				L[i][j] = L[i - 1][j - a[i]] + a[i];
			else 
				L[i][j] = L[i - 1][j]; 
		} 
	} 
	return L[n][k]; 
} 
int main(){
	cin >> k >> n;
	for(int i = 1; i <= n; i++) cin >> a[i]; 
	cout << klbo() << endl; 
	return 0;
}
*/
