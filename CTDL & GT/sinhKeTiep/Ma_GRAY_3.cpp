#include <bits/stdc++.h>
using namespace std;

char xor_c(char a, char b) {
    return (a == b) ? '0' : '1';
}

string binarytoGray(string binary) {
    string gray = "";

    gray += binary[0];

    for (int i = 1; i < binary.length(); i++)
        gray += xor_c(binary[i - 1], binary[i]);

    return gray;
}


int main() {
    int test_count;
    string str;
    cin >> test_count;
    while (test_count--) {
        cin >> str;
        cout << binarytoGray(str) << endl;
    }
    return 0;
}
