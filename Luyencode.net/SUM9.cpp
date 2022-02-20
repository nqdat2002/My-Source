#include<stdio.h>


int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
    int i, n;
    float S;
    i = 1;
    S = 0.50000;

    scanf("%d", &n);

    while(i <n)
    {
      S = 1.0/(1 + S);
      i++;
    }
    printf("%.5f\n", S);
	}
    return 0;
}