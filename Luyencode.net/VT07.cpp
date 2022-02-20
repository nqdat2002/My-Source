#include<stdio.h>
int main(){
	int n;
	int a[100],i,count=0;
	int z=0;
	do
	{
		scanf("%d",&a[z]);
		z++;
	}
	while(z<10);
	int x,c=0;
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		if(a[i]==x){
			printf("%d ",i+1);
			c++;
		}
	}
	if(c==0)
	printf("-1");
	return 0;
		
}