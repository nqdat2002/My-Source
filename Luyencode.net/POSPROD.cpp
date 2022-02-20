#include<stdio.h>
int tim(int n,int m)
{
	int min=n;
	if(m<min){
		min=m;
	}
	else if(m==min) m=min;
	return min;
}
int main() {
	int n;
	int a[100];
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    int b = 0, c= 0, d = 0;
    for(int i = 0; i < n; ++i) {
        if (a[i] > 0)
            ++b;
        else if (a[i] < 0)
            ++c;
        else
            ++d;
    }
    int dem;
    if (d > 0)
        dem = -1;
    else
        dem = tim(b,c);
    printf("%d\n", dem);
   	return 0;
}