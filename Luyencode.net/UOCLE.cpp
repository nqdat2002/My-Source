#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int n, a[1000000];
int main(){
    cin>>n;
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++){
        int count = 1;
        int j = 2;
        while (j <= sqrt(a[i])){
            if (a[i] % j == 0){
                if ((a[i] / j) % 2 == 1){
                    count = a[i] / j;
                    j = 1000000; 
                } else if (j % 2 == 1){
                    count = j;

                }      
            }
            j++;
        }
        cout<<count<<'\n';

    }

    return 0;
}