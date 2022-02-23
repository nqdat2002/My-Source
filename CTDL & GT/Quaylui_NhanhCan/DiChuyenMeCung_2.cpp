#include <iostream>
using namespace std;

// a[][] luu input
// b[][] danh dau cac a[i][j] da dung
// result luu ket qua 
// temp la bien chay cua result
// checkCase kiem tra xem neu khong co result thi output -1
int a[20][20], b[20][20] = {0}, result[101] = {0};
int n, temp, checkCase;

void output() {
    for (int i = 1; i <= 100; i++) {
        if (result[i] == 1) cout << "D";
        if (result[i] == 2) cout << "L";
        if (result[i] == 3) cout << "R";
        if (result[i] == 4) cout << "U";
    }
    cout << " ";
}

void callback(int x, int y) {
    //D
    if (x < n && a[x + 1][y] == 1 && b[x + 1][y] == 0) {
        result[temp++] = 1;
        b[x + 1][y] = 1;
        callback(x + 1, y);
        result[--temp] = 0;
        b[x + 1][y] = 0;
    }

    //L
    if (y > 1 && a[x][y - 1] == 1 && b[x][y - 1] == 0) {
        result[temp++] = 2;
        b[x][y - 1] = 1;
        callback(x, y - 1);
        result[--temp] = 0;
        b[x][y - 1] = 0;
    }

    //R
    if (y < n && a[x][y + 1] == 1 && b[x][y + 1] == 0) {
        result[temp++] = 3;
        b[x][y + 1] = 1;
        callback(x, y + 1);
        result[--temp] = 0;
        b[x][y + 1] = 0;
    }

    //U   
    if (x > 1 && a[x - 1][y] == 1 && b[x - 1][y] == 0) {
        result[temp++] = 4;
        b[x - 1][y] = 1;
        callback(x - 1, y);
        result[--temp] = 0;
        b[x - 1][y] = 0;
    }

    if (x == n && y == n) {
        output();
        checkCase++;
    }
}

main() {
    int t;
    cin >> t;
    while (t--) {
        b[1][1] = 1;
        temp = 1, checkCase = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        
        if (a[1][1] == 0 || a[n][n] == 0);
        
        else {
            callback(1, 1);
        }
        
        if (!checkCase)
            cout << -1;
            
        cout << endl;
    }
    return 0;
}
