#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    int countAm = 0, countDuong = 0;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s[0] == '-')
            countAm++;
        else if (s[0] != '0')
            countDuong++;
    }
    cout << countAm << " " << countDuong;
    return 0;
}
