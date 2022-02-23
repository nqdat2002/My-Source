#include <iostream>
using namespace std;

int a[500] = {0}, s, p, n;
int testCase, result[200], run;

void output() {
    for (int i = 1; i < run; i++) {
        cout << result[i] << " ";
        if (i % n == 0) cout << endl;
    }
}

void write() {
    for (int i = 1; i <= n; i++) {
        result[run] = a[i];
        run++;
    }
}

bool checkSum() {
    int temp = 0;
    for (int i = 1; i <= n; i++) temp += a[i];
    if (temp == s) return true;
    return false;
}

bool prime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;

    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void backTrack(int i) {
    for (int j = a[i - 1] + 1; j <= s - n + i; j++) {
        while (!prime(j) && j <= s - n + i) j++;
        a[i] = j;
        if (i == n) {
            if (checkSum()) {
                testCase++;
                write();
            }
        } else backTrack(i + 1);
    }
}

main() {
    int t;
    cin >> t;
    while (t--) {
        testCase = 0;
        run = 1;
        cin >> n >> p >> s;
        a[0] = p - 1;
        backTrack(1);
        cout << testCase << endl;
        if (testCase) output();
    }
    return 0;
}
