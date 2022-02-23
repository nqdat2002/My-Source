#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
    	long long n;
        cin >> n;
        queue<long long> q;
        stack<long long>s; 
		q.push(6);
		q.push(8);
		s.push(6);
		s.push(8);
		int dem=2; 
		for(int i=2;i<=n;i++){
			for(int j=1;j<=pow(2,i-1);j++){
				long long tmp=q.front();
				q.pop();
				q.push(tmp*10+6);
				q.push(tmp*10+8);
				s.push(tmp*10+6);
				s.push(tmp*10+8); 
				dem+=2; 
			} 
		}
		cout<<dem<<endl; 
		while(!s.empty()){
			cout<<s.top()<<" ";
			s.pop(); 
		} 
		cout<<endl; 
    }
    return 0;
}
