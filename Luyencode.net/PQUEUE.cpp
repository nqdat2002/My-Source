#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){

    int n,x;
    priority_queue <int> q;
    char c;
    scanf("%d\n",&n);
    while (n--){
        scanf("%c",&c);
        if (c == '+'){
            scanf("%d",&x);
            if (q.size() < 15000) q.push(x);
        }
        else{
            if (!q.empty()){
                x = q.top();
                while (!q.empty() && x == q.top()) q.pop();
            }
        }
        scanf("%c",&c);
    }
    vector <int> ans;
    x = q.top();
    ans.push_back(x);
    while (!q.empty()){
        while (!q.empty() && q.top() == x) q.pop();
        if (q.empty()) break;
        x = q.top();
        ans.push_back(x);
        q.pop();
    }
    cout << ans.size() << '\n';
    for (int i : ans) cout << i << ' ';
    return 0;
}
