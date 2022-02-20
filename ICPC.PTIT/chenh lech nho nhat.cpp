/*
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> arr(n);
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		int min = abs(arr[0] - arr[1]);
		for(int i = 1 ; i < n-1 ; i ++){
			for(int j = i + 1 ; j < n ; j ++){
				if(abs(arr[i] - arr[j]) < min )
					min = abs(arr[i] - arr[j]);
			}
		}
		cout << min;
		cout << endl;
	}
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
#define run() int t;cin>>t;while(t--)
main(){
     run(){
          int n;
          cin>>n;
          long a[n];
          for(int i=0;i<n;i++){
               cin>>a[i];
          }
          long v=10000000000;
          sort(a,a+n);
          for(int i=1;i<n;i++){
               if(v>a[i]-a[i-1]) v=a[i]-a[i-1];
          }
          cout << v << endl;
    }
    return 0;
}

