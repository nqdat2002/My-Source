#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	freopen("10.inp", "r", stdin);
	freopen("10.out", "w", stdout);
	int t,x,y;
    queue <int> q;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&x);
        if (x == 1){
            scanf("%d",&y);
            q.push(y);
        }
        else if (x == 2){
            if (!q.empty()) q.pop();
        }
        else{
            if (q.empty()) cout << "Empty!\n";
                else cout << q.front() << "\n";
        }
    }
}
