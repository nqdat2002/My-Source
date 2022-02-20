#include<stdio.h>
int main(){
	int n;
	int a[100],i,count=0;
	do
	{	
		scanf("%d",&n);
		if(n<0)
		{
		count++;
		printf("%d ",n);}}
	while(n!=0);
	if(count==0) printf("NOT FOUND");
	return 0;
		
}