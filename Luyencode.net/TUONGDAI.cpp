#include <stdio.h>
void fillPrefixSum(long* array, long* prefix, long range) {
    prefix[0] = array[0];
    for (long i = 1; i <= range; i++)
        prefix[i] = prefix[i-1] + array[i];
}
void resultCalc(long* result, long rangeArray[][2], long rangeLen, long* prefixSum, long carLen) {
    for (long i = 0; i < rangeLen; i++) {
        long L = rangeArray[i][0] - 1, R = rangeArray[i][1] - 1;
        if (L == 0)
            result[i] = prefixSum[R];
        else
            result[i] = prefixSum[R] - prefixSum[L-1];
        
    }
        
}
void getRangeArray(long array[][2], long len)   {
    for (int i = 0; i < len; i++)
        scanf("%ld%ld", &array[i][0], &array[i][1]);
}
void getWeightArray(long* array, long len)   {
    for (long i = 0; i < len; i++)
        scanf("%ld", &array[i]);
}
void printArray(long* array, long n)    {
    for (long i = 0; i < n; i++)
        printf("%ld ", array[i]);
    printf("\n");
}
int main(int argc, const char * argv[]) {
    long carLen, rangeLen;
    scanf("%ld%ld", &carLen, &rangeLen);
    long weightArray[carLen];
    getWeightArray(weightArray, carLen);
    long rangeArray[rangeLen][2];
    getRangeArray(rangeArray, rangeLen);
    long prefixSum[carLen+1];
    fillPrefixSum(weightArray, prefixSum, carLen);
    long result[rangeLen];
    resultCalc(result, rangeArray, rangeLen, prefixSum, carLen); 
    //printArray(prefixSum, carLen);
    printArray(result, rangeLen);
    return 0;
}
