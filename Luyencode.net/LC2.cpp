#include <iostream>

using namespace std;

int main () 
{
    int n;
    cin >> n;

    long long fib[50];
    int count = 0, a[100];
    fib[0] = fib[1] = 1;
    for (int i = 2; i<50; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for (int N = n; N>0;){
        for (int i = 1; fib[i] <= N; i++){
            a[count] = fib[i];
        }
        N-=a[count];
        count++;
    }

    cout << count << endl;
    for (int i = 0; i<count; i++){
        cout << a[i] << " ";
    }
}
