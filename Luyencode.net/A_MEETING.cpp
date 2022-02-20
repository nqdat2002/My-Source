#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
	int n,i,j;
	char X[100][200],t;
	scanf("%d %c\n",&n,&t);
	for(i=0;i<n;i++){
    	gets(X[i]);
	}	
	for(i=0;i<n;i++){
    	int c=0;
    	for(j=0;j<strlen(X[i]);j++){
    		if(t!=X[i][j]){
    			c++;
			}
		}
		if(c==strlen(X[i])) printf("%s\n",X[i]);
    }
	return 0;

}
