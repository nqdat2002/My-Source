#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long long int t=n*n;
    long long int u=(n+1)*(n+1);
    printf("%lli",(long long int)(u*t/4));
}