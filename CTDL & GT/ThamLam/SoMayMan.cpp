#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

int minValue(string str, int k) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int l = str.length();
    
    // Neu k >= l, tra ve 0
    if (k >= l)
        return 0;
    
    // mang chua so lan xuat hien
    // cua tung phan tu trong string
    int freq[MAX_CHAR] = {0};

    // Tim so lan xuat hien cua tung phan tu
    for (int i = 0; i < l; i++)
        freq[str[i]- 'a']++;
    
    // Day so lan xuat hien cua tung phan tu
    // vao trong priority_queue
    priority_queue<int> q;
    for (int i = 0; i < MAX_CHAR; i++)
        q.push(freq[i]);

    // Xoa k phan tu
    while (k--) {
        // Xoa top element cua priority_queue
        // Giam xuong 1 va tiep tuc
        // day vao priority_queue
        int temp = q.top();
        q.pop();
        temp--;
        q.push(temp);
    }

    // Tim tong binh phuong
    int result = 0;
    while (!q.empty()) {
        int temp = q.top();
        result += temp * temp;
        q.pop();
    }

    return result;
}

int main() {
    int test, k;
    string str;
    cin >> test;
    while (test--) {
        cin >> k;
        cin >> str;
        cout << minValue(str, k) << endl;
    }
    return 0;
}
