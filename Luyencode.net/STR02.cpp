#include <stdio.h>
#include<ctype.h>
int main() {
	int n,i,j,a,b,sum,m,c;
	char M[100000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		a=strlen(M);
		for(j=0;j<a;j++){
			if(M[j]>='A'&&M[j]<='Z')
			M[j]=M[j]+32;
			
			if(M[0]==' '){
				if(M[j]!=' '&&M[j-1]==' '&&j!=0)
				M[j]=M[j]-32;
			}
			else if(M[j]>='a'&&M[j]<='z')
			M[0]=M[0]-32;
			
	if(M[j]!=' '&&M[j-1]==' '&&j!=0&&M[j]>='a'&&M[j]<='z')
				M[j]=M[j]-32;
			if(M[j]==' '&&M[j-1]==' '&&j!=0)
			continue;
			printf("%c",M[j]);
		}
		printf("\n");
	}
	
	return 0;

}