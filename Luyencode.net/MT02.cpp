#include<stdio.h>
int main()
{
    int t,x;
    int a[100][100];
		int n,m;
	    int i,j,k,t1=0,t2;
	    scanf("%d%d",&n,&m);
	    for(i=0;i<n;i++){
	        for(j=0;j<m;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
		}
		for(i=0;i<n;i++){
	        for(j=0;j<m;j++)
	        {
	        	if(i%2!=0) t1+=a[i][j];
			}
	}
	printf("%d",t1);
    return 0;
}