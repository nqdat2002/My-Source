#include <bits/stdc++.h>
using namespace std;
struct toado{
	long long x,y;
};
int main() {
    struct toado A,B,C,D,E,F;
    cin >> A.x >> A.y >> B.x >> B.y;
    cin >> C.x >> C.y >> D.x >> D.y;
    if (A.x > B.x)
        swap(A.x, B.x);
    if (A.y > B.y)
        swap(A.y, B.y);
    if (C.x > D.x)
        swap(C.x, D.x);
    if (C.y > D.y)
        swap(C.y, D.y);
    E.x = max(A.x, C.x); E.y = max(A.y, C.y);
    F.x = min(B.x, D.x); F.y = min(B.y, D.y);
    if (E.x < F.x && E.y < F.y) {
        long long Ans = ((E.x - F.x) * (E.y - F.y));
        cout << Ans;
    } 
	else
        cout << 0;
    return 0;
}
