#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main ( ) {
long long n,i;
int c=0;
scanf("%lld",&n);
if (abs(n)>pow(10,12)) return 0;
else if (n<2) printf("NO");
else if (n<4) printf("YES");
else {
i=2;
while (i < sqrt(n)+1){
if (n%i==0) {
c++;
}
i+=1;
}
if (c==0)printf("YES");
else printf("NO");
}
return 0;
}