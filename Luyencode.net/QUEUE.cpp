#include <iostream>
#include <queue>
using namespace std;

int main(){

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
    return 0;
}
