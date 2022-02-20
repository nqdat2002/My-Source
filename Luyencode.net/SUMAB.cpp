#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
void printArr(long* src, long len)  {
    for (long i = 0; i < len; i++)
        cout<<src[i]<<'\n';
}
void getTestArr(long* src, long len)    {
    for (long i = 0; i < len; i++)
        cin>>src[i];
}
void getRangeArr(long rangeArr[][2], long len)  {
    for (long i = 0; i < len; i++)
        cin>>rangeArr[i][0]>>rangeArr[i][1];
}
void fillPrefixSum(long* prefixSum, long* src, long len)    {
    prefixSum[0] = src[0];
    for (long i = 1; i < len; i++)
        prefixSum[i] = prefixSum[i-1] + src[i];
}
void getResult(long* result, long rangeArr[][2], long rangeLen, long* prefixSum, long preLen) {
    long L, R;
    for (long i = 0; i < rangeLen; i++)  {
        L = rangeArr[i][0] - 1; R = rangeArr[i][1] - 1;
        if (L == 0)
            result[i] = prefixSum[R];
        else
            result[i] = prefixSum[R] - prefixSum[L-1];
    }
}
int main(){
    long n,rangeLen;
    cin>>n;
    long arr[n];
    getTestArr(arr, n);
    long prefixSum[n+1];
    fillPrefixSum(prefixSum, arr, n);
    cin>>rangeLen;
    long rangeArr[rangeLen][2];
    getRangeArr(rangeArr, rangeLen);
    long result[rangeLen];
    getResult(result, rangeArr, rangeLen, prefixSum, n);
    printArr(result, rangeLen);
    return 0;
}
