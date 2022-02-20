#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	int M[6]={a,b,c,d,e,f};
	int max=a;
	int i;int j;
	for(i=1;i<6;i++)
	{
		if(max<M[i])
		max=M[i];
		}
		
		for(i=0;i<5;i++){
			for(j=i+1;j<6;j++)
			{
				if(M[i]>M[j]){
				int t=M[i];
				M[i]=M[j];
				M[j]=t;}
				}
				}
		int c1,c2,c3,c4;
		for(i=0;i<2;i++){
			
			for(j=i+1;j<3;j++){
				if(M[j]==M[i])
				c1=M[j];
				}
			}
			
			for(i=1;i<3;i++){
			
			for(j=i+1;j<4;j++){
				if(M[j]==M[i])
				c2=M[j];
				}
			}
			for(i=2;i<4;i++){
			
			for(j=i+1;j<5;j++){
				if(M[j]==M[i])
				c3=M[j];
				}
			}
			for(i=3;i<5;i++){
			
			for(j=i+1;j<6;j++){
				if(M[j]==M[i])
				c4=M[j];
				}
			}	
	if(M[3]==max&&M[4]==max&&M[5]==max&&(M[0]+M[1]+M[2])==max)
		printf("%d",max);
	else if(max*4+c1*2+max*2==(a+b+c+d+e+f)*2)
		printf("%d",max);
	else if(max*4+c2*2+max*2==(a+b+c+d+e+f)*2)
		printf("%d",max);
	else if(max*4+c3*2+max*2==(a+b+c+d+e+f)*2)
		printf("%d",max);
	else if(max*4+c4*2+max*2==(a+b+c+d+e+f)*2)
		printf("%d",max);
	else
		printf("0");
	return 0;
	}
