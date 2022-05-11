#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    	int a[100], n;
	    cin >> n;
	    for(int i = 0; i < n; i ++) cin >> a[i];
	    vector<vector<int> > v;
	    v.clear();
	    for(int i = 0; i < n - 1 ; i ++){
	        for(int j = i + 1; j < n; j ++){
	            if(a[i] > a[j])
	                swap(a[i], a[j]);
	        }
	        vector<int> b; b.clear();
	        for(int j = 0; j < n; j ++) 
				b.push_back(a[j]);
			v.push_back(b);
	    }
	    for(int i = v.size() - 1; i >= 0; --i){
	    	cout << "Buoc " << i + 1 << ": ";
	    	for(int j = 0; j < v[i].size(); j ++){
	    		cout << v[i][j] << " ";
			}
			cout << endl;
		}	
	}
    return 0;
}
