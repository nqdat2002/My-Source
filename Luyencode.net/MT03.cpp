#include<stdio.h>
int main()
{
    int t,x;
    int a[100][100];
		int n;
	    int i,j,k,t1=0,t2;
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
		}
		for(i=0;i<n;i++){
	        for(j=0;j<n;j++)
	        {
	        	if(j==i) t1+=a[i][j];
			}
	}
	printf("%d",t1);
    return 0;
}