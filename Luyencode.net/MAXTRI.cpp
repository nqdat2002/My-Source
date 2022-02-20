#include<stdio.h>
#include<math.h>
int main(){
	int n,i;
	int M[3];
	for(i=0;i<3;i++){
		scanf("%d",&M[i]);	
	}
	for(i=0;i<3;i++)
	{
		int j;
		for(j=i+1;j<3;j++){
			if(M[i]>M[j])
			{	
				int t=M[i];
				M[i]=M[j];
				M[j]=t;
			}	
			}
	}
	if(M[3-1]!=M[3-2])
	printf("%d%d%d",M[3-1],M[3-2],M[3-3]);
	else
	printf("%d%d%d",M[3-1],M[3-2],M[3-3]);
	return 0;	
}
