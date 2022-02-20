#include <bits/stdc++.h>
using namespace std;
int main(){
	bool ok;
	deque <int> q;
    int n; cin >> n;
    if(n %  2== 1) ok = true;
    for(int i = 0; i < n; i ++){
    	int x; cin >> x;
    	if(!ok){
    		q.push_back(x);
    		ok = true;
    	}
    	else {
    		q.push_front(x);
    		ok = false;
    	}
    }
    while(!q.empty()){
    	cout << q.front() << " ";
        q.pop_front();
    }
	return 0;
}
