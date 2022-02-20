#include<stdio.h>
#include<string.h>
int main(){
	int n,i;
	char X[1000];
	gets(X);
    int j,dem=0;
		for(j=0;j<strlen(X),X[j]!='\0';j++){
		if(X[j]==' '&&X[j+1]!=' ') dem++;
		}
		printf("%d\n",dem);
 
	return 0;
    	
}
