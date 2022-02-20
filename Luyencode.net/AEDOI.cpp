#include <iostream>
#include <string>
using namespace std;
int elder, younger;
int divisor(int number) {
    int sum = 0;
    for(int i = 1; i <= number; i++)
        if (number % i == 0)
            sum += i;
    return sum;
}
string Solve(int elder, int younger) {
    if(divisor(elder) == divisor(younger))
        return "YES";
    else return "NO";
}
int main() {
    cin >> elder >> younger;
    cout << Solve(elder, younger) << endl;
    return 0;
}

