#include <iostream>
#include <string>
using namespace std;
int main(){
    string a, b;
    cin >> a;
    int max = 0;
    for (int i = 0; i < a.size(); ++i){
        int count = 1;
        for (int j = i + 1; j < a.size(); ++j){
            bool check = true;
            for (int k = j - 1; k >= i; --k){
                if (a[j] == a[k]){
                    check = false;
                    break;
                }
            }
            if (!check) break;
            count++;
        }
        if (count > max) max = count;
    }
    cout << max;
    return 0;
}
