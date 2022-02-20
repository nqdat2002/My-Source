#include<stdio.h>
#include<math.h>
int snt(long long int n){
	int i;
	if(n<2) return 0;
	else
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	return 0;
	return 1;
}
int main(){
	long long int i,M[1000],b,j;
	scanf("%d",&b);
	for(j=0;j<b;j++){
	scanf("%lli",&M[j]);	
	}
	for(j=0;j<b;j++){
	int n=0;
		if(snt(M[j]))
		printf("%lli\n",M[j]);
		else{
			i=2;
			while(i<=sqrt(M[j]))
			{
				if(M[j]%i==0)
				{
				
				if(snt(M[j]/i)){
					printf("%lli\n",M[j]/i);
					break;
				}
				else
				M[j]/=i;
			}
				else
				i++;
			}
			}
	}
		

	return 0;
}