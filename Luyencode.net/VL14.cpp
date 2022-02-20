#include <stdio.h>
int ucln(int a, int b) {
int kq;
if(a < 0) a *= -1;
    int i;
for(i = 1; i <= a; i++) {
if(a % i == 0 && b % i == 0) kq= i;
}
return kq;
}

int main() {
int a;
int b;
scanf("%d%d",&a,&b);

if(a == 0 && b == 0) return 0;
if(a == 0 || b == 0) {
    printf("%d",a == 0?b:a);
    return 0;
}
printf("%d",ucln(a, b));
}