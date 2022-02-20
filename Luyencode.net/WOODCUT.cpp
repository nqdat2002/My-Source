#include <iostream>
#include <queue>
using namespace std;

int main() {

    priority_queue<long long, vector<int>, greater<int>> p;
    int x,y,n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        p.push(x);
    }
    long long res = 0;
    while (p.size() > 1) {
        x = p.top(); p.pop();
        if (!p.empty()){
            y = p.top(); p.pop();
        }
        else y = 0;
        p.push(x+y);
        res += x+y;
    }
    cout << res;
}
