#include <bits/stdc++.h>
using namespace std;
int N, a[100005];
void init(){
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
}
void Solve(){
    int f1[100005], f2[100005];
    vector <int> ans;
    f1[0] = a[0]; // max 0 -> i
    f2[N - 1] = a[N - 1]; // min n-1 -> i
    for (int i = 1; i < N; i++)
        f1[i] = max(a[i], f1[i - 1]);
    for (int i = N - 2; i >= 0; i--)
        f2[i] = min(f2[i + 1], a[i]);
    int count = 0;
    for (int i = 0; i < N-1; i++) {
        if(f1[i] <= f2[i+1]){
            count++;
            ans.push_back(i+1);
        }     
    }
    cout << count << endl;
    for (int i = 0; i < count; i++)
        cout << ans[i] << " ";
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        init();
        Solve();
    }
    return 0;
}
