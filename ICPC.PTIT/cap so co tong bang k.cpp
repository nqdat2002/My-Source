#include <bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
	    long n;
	    long k;
	    cin >> n >> k;
	    unordered_map <long, long> fre;
	    vector<long> arr(n);
	    for (long i = 0; i < n; i++){
	        cin >> arr[i];
	        fre[arr[i]]++;
	    }
	    long cnt = 0;
	    for (long i = 0; i < n; i++){
	        if (arr[i] == k - arr[i])
	            cnt += (fre[arr[i]] - 1);
	        else
	            cnt += (fre[k - arr[i]]);
		}
	 	cnt /= 2;
	    cout << cnt << endl;
	}
    return 0;
}
