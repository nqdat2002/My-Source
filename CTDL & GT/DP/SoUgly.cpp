#include <bits/stdc++.h>
using namespace std;

long long res[1005];

long long uglyNthNum(int n) {
    res[1] = 1;
    long long multipleOf2 = 2;
    long long multipleOf3 = 3;
    long long multipleOf5 = 5;
    int uglyIndex2 = 1, uglyIndex3 = 1, uglyIndex5 = 1;

    int count = 2;
    while (count <= n) {
        long long tmp = min(min(multipleOf2, multipleOf3), multipleOf5);
        res[count++] = tmp;

        if (tmp == multipleOf2)
            multipleOf2 = res[++uglyIndex2] * 2;
        
        if (tmp == multipleOf3)
            multipleOf3 = res[++uglyIndex3] * 3;

        if (tmp == multipleOf5)
            multipleOf5 = res[++uglyIndex5] * 5;
    }
    return res[n];
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << uglyNthNum(n) << endl;
    }
    return 0;
}
