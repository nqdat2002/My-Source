#include <iostream>
using namespace std;
int main (){
    long A, B, V;
    cin >> A >> B >> V;
    if (A == V) 
        cout << 1;
    else{
        if ((V - B) % (A - B) == 0) 
            cout << (V - B) / (A - B);
        else 
            cout << (V - B) / (A - B) + 1;
    }
    return 0;
}