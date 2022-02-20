#include <stdio.h>
#include <string.h>

#define MAX_SZ 100

int main(int argc, const char * argv[]) {
    char c, buf[MAX_SZ];
    long len;
    scanf("%ld %c ", &len, &c);
    
    for (long i = 0; i < len; i++)  {
        scanf("%s", buf);
        if (strchr(buf, c) == NULL)
            puts(buf);
    }
    
    return 0;
}
