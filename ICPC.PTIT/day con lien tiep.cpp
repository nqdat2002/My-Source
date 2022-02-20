#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<long long> arr(n+5);
	    bool Is_correct = false;
		long long int max;
	    for(int i = 0; i < n ; i ++){
	        cin >> arr[i];
			if(arr[i]>0)
				Is_correct =true;
			if(i==0)
				max = arr[0];
			else{
				if(max < arr[i])
					max = arr[i];
			}
		}
		if(!Is_correct)
			cout << max << endl;
		else{
			long long int sum = 0, res = arr[0];
			for(int i = 0 ; i < n; i ++){
				if(sum + arr[i] < 0){
					sum=0;
					continue;
				}
				sum += arr[i];
					if(res < sum)
						res = sum;
			}
			cout << res << endl;
		}
		/*
	    ///TLE
	    long long arr[n + 5];
	    for(int i = 1 ; i <= n ; i ++)
	    	cin >> arr[i];
	    long long res = arr[1];
	    for(int i = 1; i <= n ; i ++){
	        res = max(res, arr[i]);
	        long long tmp = arr[i];
	        for(int j = i + 1 ; j <= n ; j++){
	            tmp += arr[j];
	            res = max(res, tmp);
	        }
	    }
	    cout << res << endl;
	*/
	}
	return 0;
}
