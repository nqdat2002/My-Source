#include <iostream>
#include <stack>
using namespace std;
int a[100005], b[100005];
int n;
int main(){
    cin >> n;
    a[0] = -1;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        (a[i] == a[i-1]) ? b[i] = b[i-1] + 1 : b[i] = 1;
    }
    long long res = 0;
    stack<int> s;
    s.push(1);
    for (int i = 2; i <= n; i++){
        while (!s.empty() && a[s.top()] <= a[i]) {
            res += b[s.top()];
            if (s.top() == i - 1)
                res--;
            s.pop();
        }
        if (!s.empty()){
            res++;
            if (s.top() != i - 1)
                res++;
        } else
            res++;
        s.push(i);
    }
    cout << res;
    return 0;
}
