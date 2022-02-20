#include<stdio.h>
#include<string.h>
int main(){
	char a[50],b[50],c[50];
	
//	scanf("%d%d",&a,&b);
	for(int i=0;i<strlen(a)-1;i++){
	c[i]=a[i] ^ b[i];
}
	printf("%s",c);
}
