#include <bits/stdc++.h>
using namespace std;
#define nmax 100001
typedef long long ll;
const double oo = 4e9;
int n;
struct point {
    double x, y;
} A[nmax];
void enter() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> A[i].x >> A[i].y;
    sort(A + 1, A + n + 1, [](point X, point Y) { return X.x < Y.x; });
}
double dist(int i, int j) {
    double dx = A[i].x - A[j].x, dy = A[i].y - A[j].y;
    return sqrt(dx * dx + dy * dy);
}
double nearest(int l, int r) {
    if (r - l <= 0)
        return oo;
    if (r - l == 1)
        return dist(l, r);
    int mid = (l + r) >> 1;
    // Chia t?p di?m A[l..r] thành 2 t?p A[l..mid] và A[mid + 1..r]
    // G?i d? quy d? tìm kho?ng cách nh? nh?t trong hai t?p
    double d = min(nearest(l, mid), nearest(mid + 1, r));
    // Xét t?p các di?m có hoành d? n?m trong do?n [A[mid].x - d, A[mid].x + d]

    vector<int> Q;
    for (int i = mid; i >= l && A[mid].x - A[i].x <= d; i--) Q.push_back(i);
    for (int i = mid + 1; i <= r && A[i].x - A[mid].x <= d; i++) Q.push_back(i);
    sort(Q.begin(), Q.end(), [](int i, int j) { return A[i].y > A[j].y; });

    for (int i = 0; i < Q.size(); i++) {
        int i1 = Q[i];
        for (int j = i + 1; j < Q.size() && j < i + 8; j++) {
            int j1 = Q[j];
            if (A[i1].y - A[j1].y > d)
                break;
            d = min(d, dist(i1, j1));
        }
    }
    return d;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    enter();
    cout << setprecision(3) << fixed << nearest(1, n);
}
