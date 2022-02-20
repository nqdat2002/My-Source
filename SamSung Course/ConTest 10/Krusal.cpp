#include <bits/stdc++.h>
using namespace std;
struct canh {
    int dau, cuoi;
    int ts;
};
int parent[1000], n, m;
int find(int i) {
    if (parent[i] == -1)
        return i;
    
    return find(parent[i]);
}
void Union(int x, int y) {
    int xset = find(x);
    int yset = find(y);
    if (xset != yset)
        parent[xset] = yset;
}
bool chuTrinh(vector<canh> a) {
    memset(parent, -1, sizeof(parent));
    for (int i = 0; i < a.size(); i++) {
        int d = find(a[i].dau);
        int c = find(a[i].cuoi);
        if (d == c)
            return true;
        
        Union(d, c);
    }
    return false;
}

bool cmp(canh a, canh b) {
    return a.ts < b.ts;
}
void Kruskal(canh dsc[]) {
    vector<canh> caykhung;
    sort(dsc, dsc + m, cmp);
    int i, kq = dsc[0].ts;
    caykhung.push_back(dsc[0]);
    for (i = 1; i < m; i++) {
        caykhung.push_back(dsc[i]);
        if (!chuTrinh(caykhung))
            kq += dsc[i].ts;      
        else {
            caykhung.pop_back();
            continue;
        }
        if (caykhung.size() > n - 1)
            break;
    }
    cout << kq << endl;
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> m;
        canh dsc[m];
        for (int i = 0; i < m; i++)
            cin >> dsc[i].dau >> dsc[i].cuoi >> dsc[i].ts;
        Kruskal(dsc);
    }
    return 0;
}