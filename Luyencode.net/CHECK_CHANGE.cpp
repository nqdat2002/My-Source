#include <stdio.h>
void getTestArr(long* src, long len){
    for (long i = 0; i < len; i++)
        scanf("%ld", &src[i]);
}
void getResult(long* arr, int len, int* increase, int* decrease)    {
    long currentIncre = arr[0], currentDecre = arr[0];
    for (int i = 1; i < len; i++)
        if (arr[i] > currentIncre){
            currentIncre = arr[i];
            *increase += 1;
        }
        else if (arr[i] < currentDecre) {
            currentDecre = arr[i];
            *decrease += 1;
        }
} 
int main() {
    int len;
    scanf("%d", &len);
    long arr[len];
    getTestArr(arr, len);
    int increase = 0, decrease = 0;
    getResult(arr, len, &increase, &decrease);
    printf("%d %d", increase, decrease);
    return 0;
}
