#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SZ 1002
char* getStrFromSTDIN(int* len) {
    char buf[MAX_SZ];
    fgets(buf, MAX_SZ, stdin); 
// Remove trailing newline, if there.
    *len = (int)strlen(buf);
    if (buf[*len-1] == '\n')
        buf[*len-1] = '\0'; 
    char* str = malloc(*len);
    strcpy(str, buf);
    return str;
}
// if src is Greater than dst then strcpy(dst, src)
void maxStrcpy(char* dst, char* src) {
    int srcLen = (int)strlen(src);
    int dstLen = (int)strlen(dst);
    
    if (dstLen > srcLen) return;
    else if (dstLen < srcLen)
        strcpy(dst, src);
    else
        for (int i = 0; i < dstLen; i++)
            if (dst[i] > src[i])
                return;
            else if (dst[i] < src[i])
                strcpy(dst, src);
}
char* findMaxNum(char* src, int len) {
    char* dst = malloc(MAX_SZ);
    for (int i = len-1; i >= 0; i--)
        if (src[i] >= '0' && src[i] <= '9') {
            src[i+1] = '\0';
            while (src[i] >= '0' && src[i] <= '9')
                i--;
            maxStrcpy(dst, &src[i+1]);
        }
    return dst;
}
int main(int argc, const char * argv[]) {
    int len;
    char* src = getStrFromSTDIN(&len);
    char* result = findMaxNum(src, len);
    puts(result);
    free(result);
    free(src);
    src = NULL;
    result = NULL;
    return 0;
}
