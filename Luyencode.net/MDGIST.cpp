#include <stdio.h>
#include <math.h>
int A[] = {1,10,100,1000,10000,100000,1000000,10000000,100000000};
void pro(int num, int len, int count[])
{
    int n, i;
    n = num / A[len];
    if (num ==0) 
    {
        count[n] += len+1;
        return;
    }
    for(i=0;i<n;i++)
        count[i] += A[len];
    count[n] += num % A[len] + 1;
    if(len==0) return;
    for(i=0;i<10;i++)
        count[i] += n*len*A[len-1];
    pro(num % A[len], len-1, count);
}
int main()
{
    int p1, p2, a, b, c, i;
    while(scanf("%d%d",&a,&b)==2 && a+b)
    {
        if(a>b)
        {
            c = a;
            a = b;
            b = c;
        }
        a--;
        int count1[10] = {1};
        int count2[10] = {1};
        if(a)
        {
            p1 = (int)floor(log10(a));
            pro(a, p1, count1);
            for(i=0; i<=p1; i++);
                count1[0] -= A[i];
        }
 
        p2 = (int)floor(log10(b));
        pro(b, p2, count2);
 
      //  for(i=0; i<=p2; i++)
     //       count2[0] -= A[i];
 
      //  printf("%d ",count2[0]-count1[0]);
      //  for(i=1; i<10; i++) 
            printf("%d",count2[2]-count1[2]);
      //  printf("\n");
    }
    return 0;
}

