#include<bits/stdc++.h>
// dynamic programming 
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(1005);
        for(int i = 0; i < n; i ++)
            cin >> arr[i];
        long long dp[1005];
        long long res = 0;
        for(int i = 0; i < n; i ++){
            dp[i] = arr[i];
            for(int j = 0; j < i; j ++)
                if(arr[i] > arr[j])
                    dp[i] = max(dp[i], dp[j] + arr[i]);
            res = max(res, dp[i]);
        }
        cout << res << endl;     
    }
    return 0;
}
