#include<stdio.h>
int main()
{
    int t,x;
    int a[100][100];
  //  scanf("%d",&t);
   // for(x=0;x<t;x++)
//	{
		int m,n;
	    int i,j,k,t1,t2;
	    scanf("%d%d",&m,&n);
	    int z;
		scanf("%d",&z);
	    for(i=0;i<m;i++){
		
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&a[i][j]);
	        }
		}
	    //sap xep theo hang
/*	    for(i=0;i<m;i++)
		{	
	        for(j=0;j<n-1;j++)
			{
	            for( k=j+1;k<n;k++)
				{	
				
	               	if(a[i][j]>a[i][k])
	                {
	                    int t1=a[i][j];
	                    a[i][j]=a[i][k];
	                    a[i][k]=t1;
	                }
	    	    }
			}
		} */
	    // sap xep theo cot
	        for(j=0;j<m-1;j++)
			{	
	            for( k=j+1;k<m;k++)
				{
	                if(a[j][z-1]>a[k][z-1])
	                {
	                    int t2=a[j][z-1];
	                    a[j][z-1]=a[k][z-1];
	                    a[k][z-1]=t2;
	       			}
				}
			}
	    for(i=0;i<m;i++)
	    {
	        for(j=0;j<n;j++)
	            printf("%d ",a[i][j]);
	        printf("\n");
	    }
//	}
    return 0;
}