#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        queue <long long> q;
		q.push(1);
		long long tmp=0; 
		while(!q.empty()){
			tmp=q.front();
			q.pop();
			if(tmp%n==0){
				break; 
			}
			else{
				q.push(tmp*10);
				q.push(tmp*10+1); 
			} 
		}
		cout<<tmp<<endl; 
    }
    return 0;
}
