#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a[10005];
    long long int k,h;
    cin >> k;
    h=log(k+1)/log(2)-1;
    k=k-pow(2,h+1)+2;
    k--;
    int n=h;
    for(int i=0;i<=h;i++) 
		a[i]=4;
    while(k>0){
        if(k%2) a[n]=7;
        n--;
        k/=2;
    }
    for(int i=0;i<=h;i++) 
		cout<<a[i];
 	return 0;
}
 
