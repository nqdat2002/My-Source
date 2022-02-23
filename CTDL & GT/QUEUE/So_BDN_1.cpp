#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    long long n;
    cin >> t;
    while (t--) {
        cin >> n;
        queue <long long> q;
		q.push(1);
		int dem=0;
		while(!q.empty()){
			long long tmp=q.front();
			q.pop();
			if(tmp<=n){
				dem++;
				q.push(tmp*10);
				q.push(tmp*10+1); 
			} 
		} 
		cout<<dem<<endl; 
    }
    return 0;
}
