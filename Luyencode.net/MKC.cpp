#include<stdio.h>
#include<string.h>
int main(){        						
	char kt[1000];   
	int i, dem1=0, dem2=0,sum=0;
	gets(kt);        					
	int n = strlen(kt); 					
	for(i=0 ; i<n ; i++){
		sum=sum+kt[i];
	}
	printf("%d",sum-48*n);
	return 0;
}